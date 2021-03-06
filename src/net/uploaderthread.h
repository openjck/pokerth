/*****************************************************************************
 * PokerTH - The open source texas holdem engine                             *
 * Copyright (C) 2006-2011 Felix Hammer, Florian Thauer, Lothar May          *
 *                                                                           *
 * This program is free software: you can redistribute it and/or modify      *
 * it under the terms of the GNU Affero General Public License as            *
 * published by the Free Software Foundation, either version 3 of the        *
 * License, or (at your option) any later version.                           *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU Affero General Public License for more details.                       *
 *                                                                           *
 * You should have received a copy of the GNU Affero General Public License  *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.     *
 *****************************************************************************/
/* Network file upload thread. */

#ifndef _UPLOADERTHREAD_H_
#define _UPLOADERTHREAD_H_

#include <boost/shared_ptr.hpp>
#include <queue>
#include <core/thread.h>


#define UPLOADER_THREAD_TERMINATE_TIMEOUT		THREAD_WAIT_INFINITE
class UploadHelper;

class UploaderThread : public Thread
{
public:

	UploaderThread();
	virtual ~UploaderThread();

	void QueueUpload(const std::string &url, const std::string &user, const std::string &pwd, const std::string &filename, size_t filesize);

protected:
	struct UploadData {
		UploadData() : filesize(0) {}
		UploadData(const std::string &a, const std::string &u, const std::string &p, const std::string &f, size_t s)
			: address(a), user(u), pwd(p), filename(f), filesize(s) {}

		std::string address;
		std::string user;
		std::string pwd;
		std::string filename;
		size_t filesize;
	};

	typedef std::queue<UploadData> UploadDataQueue;

	// Main function of the thread.
	virtual void Main();

private:

	UploadDataQueue m_uploadQueue;
	mutable boost::mutex m_uploadQueueMutex;

	boost::shared_ptr<UploadHelper> m_uploadHelper;
	bool m_uploadInProgress;
};

#endif

