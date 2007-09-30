/***************************************************************************
 *   Copyright (C) 2007 by Lothar May                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
/* Socket message definitions. */
#ifndef _SOCKET_MSG_H_
#define _SOCKET_MSG_H_

// Socket or socket related errors.
#define ERR_SOCK_INTERNAL				1
#define ERR_SOCK_SERVERADDR_NOT_SET		2
#define ERR_SOCK_INVALID_PORT			3
#define ERR_SOCK_CREATION_FAILED		4
#define ERR_SOCK_SET_ADDR_FAILED		5
#define ERR_SOCK_SET_PORT_FAILED		6
#define ERR_SOCK_RESOLVE_FAILED			7
#define ERR_SOCK_BIND_FAILED			8
#define ERR_SOCK_LISTEN_FAILED			9
#define ERR_SOCK_ACCEPT_FAILED			10
#define ERR_SOCK_CONNECT_FAILED			11
#define ERR_SOCK_CONNECT_TIMEOUT		12
#define ERR_SOCK_SELECT_FAILED			13
#define ERR_SOCK_RECV_FAILED			14
#define ERR_SOCK_SEND_FAILED			15
#define ERR_SOCK_CONN_RESET				16
#define ERR_SOCK_CONN_EXISTS			17
#define ERR_SOCK_INVALID_PACKET			18
#define ERR_SOCK_INVALID_STATE			19
#define ERR_SOCK_INVALID_TYPE			20
// The following errors are game errors.
#define ERR_NET_VERSION_NOT_SUPPORTED	101
#define ERR_NET_SERVER_FULL				102
#define ERR_NET_INVALID_PASSWORD		103
#define ERR_NET_INVALID_PASSWORD_STR	104
#define ERR_NET_PLAYER_NAME_IN_USE		105
#define ERR_NET_INVALID_PLAYER_NAME		106
#define ERR_NET_INVALID_PLAYER_CARDS	107
#define ERR_NET_INVALID_PLAYER_RESULTS	108
#define ERR_NET_INVALID_GAME_NAME		109
#define ERR_NET_UNKNOWN_GAME			110
#define ERR_NET_INVALID_CHAT_TEXT		111
#define ERR_NET_UNKNOWN_PLAYER_ID		112
#define ERR_NET_INVALID_ROUND			113
#define ERR_NET_PLAYER_KICKED			114
#define ERR_NET_INVALID_PLAYER_COUNT	115

#define ERR_IRC_INTERNAL				151
#define ERR_IRC_CONNECT_FAILED			152
#define ERR_IRC_TERMINATED				153
#define ERR_IRC_SELECT_FAILED			154
#define ERR_IRC_RECV_FAILED				155
#define ERR_IRC_SEND_FAILED				156
#define ERR_IRC_INVALID_PARAM			157
#define ERR_IRC_TIMEOUT					158

// Notifications - removed from game
#define NTF_NET_INTERNAL				201
#define NTF_NET_REMOVED_ON_REQUEST		202
#define NTF_NET_REMOVED_GAME_FULL		203
#define NTF_NET_REMOVED_ALREADY_RUNNING	204
#define NTF_NET_REMOVED_KICKED			205

// Notifications - join failed
#define NTF_NET_JOIN_GAME_FULL			206
#define NTF_NET_JOIN_ALREADY_RUNNING	207
#define NTF_NET_JOIN_INVALID_PASSWORD	208

// This is an internal message which is not reported.
#define MSG_SOCK_INTERNAL_PENDING		0

// The following messages are connect messages.
#define MSG_SOCK_INIT_DONE				1
#define MSG_SOCK_RESOLVE_DONE			2
#define MSG_SOCK_CONNECT_DONE			3
#define MSG_SOCK_SESSION_DONE			4

#define MSG_SOCK_LIMIT_CONNECT			MSG_SOCK_SESSION_DONE
#define MSG_SOCK_LAST					MSG_SOCK_SESSION_DONE

// The following messages are game messages.
#define MSG_NET_GAME_CLIENT_JOIN		5
#define MSG_NET_GAME_CLIENT_START		6
#define MSG_NET_GAME_CLIENT_HAND_START	7
#define MSG_NET_GAME_CLIENT_HAND_END	8
#define MSG_NET_GAME_CLIENT_END			9

#define MSG_NET_GAME_SERVER_START		10
#define MSG_NET_GAME_SERVER_HAND_START	11
#define MSG_NET_GAME_SERVER_HAND_END	12
#define MSG_NET_GAME_SERVER_ROUND		13
#define MSG_NET_GAME_SERVER_ACTION		14
#define MSG_NET_GAME_SERVER_CARDS_DELAY	15
#define MSG_NET_GAME_SERVER_END			16

#endif

