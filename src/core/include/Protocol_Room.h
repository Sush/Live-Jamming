#ifndef __PROTOCOL_ROOM_H__
#define __PROTOCOL_ROOM_H__

#define ROOM_COMPONENTID			4

#define ROOM_JOIN				1
#define ROOM_JOIN_OK				2
#define ROOM_JOIN_NOK_ALREADYINROOM		3

#define ROOM_JOINED				4
#define ROOM_JOINED_ACK				5

#define ROOM_MESSAGE				6
#define ROOM_MESSAGE_ACK			7

#define ROOM_MESSAGE_RECV			8
#define ROOM_MESSAGE_RECV_ACK			9

#define ROOM_LEAVE				10
#define ROOM_LEAVE_OK				11
#define ROOM_LEAVE_NOK_NOTINROOM		12

#define ROOM_LEAVED				13
#define ROOM_LEAVED_ACK				14

#define ROOM_KICK				15
#define ROOM_KICK_OK				16
#define ROOM_KICK_NOK_NOTINROOM			17

#define ROOM_KICKED				18
#define ROOM_KICKED_ACK				19

#define ROOM_USER_KICKED			20
#define ROOM_USER_KICKED_ACK			21

#define ROOM_INVITE				22
#define ROOM_INVITE_ACK				23

#define ROOM_INVITED				24
#define ROOM_INVITED_ACK			25

#define ROOM_START_JAM				26
#define ROOM_START_JAM_ACK			27

#define ROOM_STARTED_JAM			28
#define ROOM_STARTED_JAM_ACK			29

#define ROOM_STOP_JAM				30
#define ROOM_STOP_JAM_ACK			31

#define ROOM_STOPED_JAM				32
#define ROOM_STOPED_JAM_ACK			33

// binary data contained in packet in order of placement in the binary fields
#define PROTOV1_ROOM_ROOMID_OFF			PROTOV1_START_OF_DATA * 8
#define PROTOV1_ROOM_ROOMID_SIZE		17

#define PROTOV1_ROOM_CLIENTSESSIONID_OFF	PROTOV1_ROOM_ROOMID_OFF + PROTOV1_ROOM_ROOMID_SIZE
#define PROTOV1_ROOM_CLIENTSESSIONID_SIZE	PROTOV1_SESSIONID_SIZE

// data contained in packet in order of placement in the data fields
#define PROTOV1_ROOM_START_OF_DATA		(PROTOV1_START_OF_DATA + BINARYTOBYTE_LEN(PROTOV1_ROOM_CLIENTSESSIONID_OFF + PROTOV1_ROOM_CLIENTSESSIONID_SIZE))

#define PROTOV1_ROOM_DATA_ROOM_NAME		0

#define PROTOV1_ROOM_DATA_LOGIN			1

#define PROTOV1_ROOM_DATA_MESSAGE		0

#endif // ! __PROTOCOL_ROOM_H__
