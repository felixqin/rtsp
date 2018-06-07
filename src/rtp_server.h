#ifndef __RTP_SERVER_H__
#define __RTP_SERVER_H__

#include "rtsp_server.h"
#include "rtp.h"


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


typedef struct rtp_param_ {
	// int 					serport;
	// int 					cliport;
	// int 					ssrc;
	rtsp_stream_source_s* 	pstream_src;
} rtp_server_param_s;


typedef struct rtp_server_stream_param_ {
	int					server_port;
	int					client_port;
	RTSP_STREAM_TYPE_E	type;
} rtp_server_stream_param_s;


int rtp_server_init(void **pphdl, rtp_server_param_s* pparam);


int rtp_server_uninit(void **pphdl);


int rtp_server_streaming(void* phdl, rtp_server_stream_param_s* pparam);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif