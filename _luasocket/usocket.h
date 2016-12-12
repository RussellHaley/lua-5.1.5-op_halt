#ifndef USOCKET_H
#define USOCKET_H
/*=========================================================================*\
* Socket compatibilization module for Unix
* LuaSocket toolkit
*
* RCS ID: $Id: usocket.h,v 1.7 2005/10/07 04:40:59 diego Exp $
\*=========================================================================*/

/*=========================================================================*\
* BSD include files
\*=========================================================================*/
/* error codes */
#include <errno.h>
/* close function */
#include <unistd.h>
/* fnctnl function and associated constants */
#include <fcntl.h>
/* struct sockaddr */
#include <sys/types.h>
/* socket function */
#include <sys/socket.h>
/* struct timeval */
#include <sys/time.h>
/* gethostbyname and gethostbyaddr functions */
#include <netdb.h>
/* sigpipe handling */
#include <signal.h>
/* IP stuff*/
#include <netinet/in.h>
#include <arpa/inet.h>
/* TCP options (nagle algorithm disable) */
#include <netinet/tcp.h>

typedef int t_socket;
typedef t_socket *p_socket;

#define SOCKET_INVALID (-1)

#ifdef SOCKET_POLL
#include <sys/poll.h>

#define WAITFD_R        POLLIN
#define WAITFD_W        POLLOUT
#define WAITFD_C        (POLLIN|POLLOUT)

#else

#define WAITFD_R        1
#define WAITFD_W        2
#define WAITFD_C        (WAITFD_R|WAITFD_W)

#endif

#endif /* USOCKET_H */
