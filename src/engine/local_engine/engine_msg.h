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

#ifndef _ENGINE_MSG_H_
#define _ENGINE_MSG_H_

// Engine errors -> LocalExceptions
#define ERR_SEAT_NOT_FOUND				10001
#define ERR_ACTIVE_PLAYER_NOT_FOUND			10002
#define ERR_RUNNING_PLAYER_NOT_FOUND			10003
#define ERR_DEALER_NOT_FOUND			10004
#define ERR_CURRENT_PLAYER_NOT_FOUND			10005

#define ERR_NEXT_DEALER_NOT_FOUND			10010
#define ERR_NEXT_ACTIVE_PLAYER_NOT_FOUND		10011
#define ERR_FORMER_RUNNING_PLAYER_NOT_FOUND		10012

#define ERR_NO_WINNER					10020

#endif

