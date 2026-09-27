//
// Copyright (c) 2022 ZettaScale Technology
//
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License 2.0 which is available at
// http://www.eclipse.org/legal/epl-2.0, or the Apache License, Version 2.0
// which is available at https://www.apache.org/licenses/LICENSE-2.0.
//
// SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
//
// Contributors:
//   ZettaScale Zenoh Team, <zenoh@zettascale.tech>
//

#ifndef INCLUDE_ZENOH_PICO_CONFIG_H
#define INCLUDE_ZENOH_PICO_CONFIG_H

#ifdef ZENOH_GENERIC
#include <zenoh_generic_config.h>
#else

/*--- CMake generated config; pass values to CMake to change the following tokens ---*/
#ifndef Z_FRAG_MAX_SIZE
#define Z_FRAG_MAX_SIZE 4096
#endif
#ifndef Z_BATCH_UNICAST_SIZE
#define Z_BATCH_UNICAST_SIZE 2048
#endif
#ifndef Z_BATCH_MULTICAST_SIZE
#define Z_BATCH_MULTICAST_SIZE 2048
#endif
#ifndef Z_CONFIG_SOCKET_TIMEOUT
#define Z_CONFIG_SOCKET_TIMEOUT 100
#endif
#ifndef Z_TRANSPORT_LEASE
#define Z_TRANSPORT_LEASE 10000
#endif
#ifndef ZP_PERIODIC_SCHEDULER_MAX_TASKS
#define ZP_PERIODIC_SCHEDULER_MAX_TASKS 64
#endif

/* #undef Z_FEATURE_UNSTABLE_API */
#ifndef Z_FEATURE_MULTI_THREAD
#define Z_FEATURE_MULTI_THREAD 1
#endif
#ifndef Z_FEATURE_PUBLICATION
#define Z_FEATURE_PUBLICATION 1
#endif
#ifndef Z_FEATURE_ADVANCED_PUBLICATION
#define Z_FEATURE_ADVANCED_PUBLICATION 0
#endif
#ifndef Z_FEATURE_SUBSCRIPTION
#define Z_FEATURE_SUBSCRIPTION 1
#endif
#ifndef Z_FEATURE_ADVANCED_SUBSCRIPTION
#define Z_FEATURE_ADVANCED_SUBSCRIPTION 0
#endif
#ifndef Z_FEATURE_QUERY
#define Z_FEATURE_QUERY 1
#endif
#ifndef Z_FEATURE_QUERYABLE
#define Z_FEATURE_QUERYABLE 1
#endif
#ifndef Z_FEATURE_LIVELINESS
#define Z_FEATURE_LIVELINESS 1
#endif
#ifndef Z_FEATURE_RAWETH_TRANSPORT
#define Z_FEATURE_RAWETH_TRANSPORT 0
#endif
#ifndef Z_FEATURE_INTEREST
#define Z_FEATURE_INTEREST 1
#endif
#ifndef Z_FEATURE_LINK_TCP
#define Z_FEATURE_LINK_TCP 1
#endif
#ifndef Z_FEATURE_LINK_BLUETOOTH
#define Z_FEATURE_LINK_BLUETOOTH 0
#endif
#ifndef Z_FEATURE_LINK_WS
#define Z_FEATURE_LINK_WS 0
#endif
#ifndef Z_FEATURE_LINK_SERIAL
#define Z_FEATURE_LINK_SERIAL 0
#endif
#ifndef Z_FEATURE_LINK_SERIAL_USB
#define Z_FEATURE_LINK_SERIAL_USB 0
#endif
#ifndef Z_FEATURE_LINK_TLS
#define Z_FEATURE_LINK_TLS 0
#endif
#ifndef Z_FEATURE_SCOUTING
#define Z_FEATURE_SCOUTING 1
#endif
#ifndef Z_FEATURE_LINK_UDP_MULTICAST
#define Z_FEATURE_LINK_UDP_MULTICAST 1
#endif
#ifndef Z_FEATURE_LINK_UDP_UNICAST
#define Z_FEATURE_LINK_UDP_UNICAST 1
#endif
#ifndef Z_FEATURE_MULTICAST_TRANSPORT
#define Z_FEATURE_MULTICAST_TRANSPORT 1
#endif
#ifndef Z_FEATURE_UNICAST_TRANSPORT
#define Z_FEATURE_UNICAST_TRANSPORT 1
#endif
#ifndef Z_FEATURE_FRAGMENTATION
#define Z_FEATURE_FRAGMENTATION 1
#endif
#ifndef Z_FEATURE_ENCODING_VALUES
#define Z_FEATURE_ENCODING_VALUES 1
#endif
#ifndef Z_FEATURE_TCP_NODELAY
#define Z_FEATURE_TCP_NODELAY 1
#endif
#ifndef Z_FEATURE_LOCAL_SUBSCRIBER
#define Z_FEATURE_LOCAL_SUBSCRIBER 0
#endif
#ifndef Z_FEATURE_SESSION_CHECK
#define Z_FEATURE_SESSION_CHECK 1
#endif
#ifndef Z_FEATURE_BATCHING
#define Z_FEATURE_BATCHING 1
#endif
#ifndef Z_FEATURE_BATCH_TX_MUTEX
#define Z_FEATURE_BATCH_TX_MUTEX 0
#endif
#ifndef Z_FEATURE_BATCH_PEER_MUTEX
#define Z_FEATURE_BATCH_PEER_MUTEX 0
#endif
#ifndef Z_FEATURE_MATCHING
#define Z_FEATURE_MATCHING 1
#endif
#ifndef Z_FEATURE_RX_CACHE
#define Z_FEATURE_RX_CACHE 0
#endif
#ifndef Z_FEATURE_UNICAST_PEER
#define Z_FEATURE_UNICAST_PEER 1
#endif
#ifndef Z_FEATURE_AUTO_RECONNECT
#define Z_FEATURE_AUTO_RECONNECT 1
#endif
#ifndef Z_FEATURE_MULTICAST_DECLARATIONS
#define Z_FEATURE_MULTICAST_DECLARATIONS 0
#endif
#ifndef Z_FEATURE_PERIODIC_TASKS
#define Z_FEATURE_PERIODIC_TASKS 0
#endif

// End of CMake generation

#endif /* ZENOH_GENERIC */

/*------------------ Runtime configuration properties ------------------*/
/**
 * The library mode.
 * Accepted values : `"client"`, `"peer"`.
 * Default value : `"client"`.
 */
#ifndef Z_CONFIG_MODE_KEY
#define Z_CONFIG_MODE_KEY 0x40
#endif
#ifndef Z_CONFIG_MODE_CLIENT
#define Z_CONFIG_MODE_CLIENT "client"
#endif
#ifndef Z_CONFIG_MODE_PEER
#define Z_CONFIG_MODE_PEER "peer"
#endif
#ifndef Z_CONFIG_MODE_DEFAULT
#define Z_CONFIG_MODE_DEFAULT Z_CONFIG_MODE_CLIENT
#endif

/**
 * The locator of a peer to connect to.
 * Accepted values : `<locator>` (ex: `"tcp/10.10.10.10:7447"`).
 * Default value : None.
 * Multiple values are accepted in peer to peer unicast mode.
 */
#ifndef Z_CONFIG_CONNECT_KEY
#define Z_CONFIG_CONNECT_KEY 0x41
#endif

/**
 * A locator to listen on.
 * Accepted values : `<locator>` (ex: `"tcp/10.10.10.10:7447"`).
 * Default value : None.
 * Multiple values are not accepted in zenoh-pico.
 */
#ifndef Z_CONFIG_LISTEN_KEY
#define Z_CONFIG_LISTEN_KEY 0x42
#endif

/**
 * The user name to use for authentication.
 * Accepted values : `<string>`.
 * Default value : None.
 */
#ifndef Z_CONFIG_USER_KEY
#define Z_CONFIG_USER_KEY 0x43
#endif

/**
 * The password to use for authentication.
 * Accepted values : `<string>`.
 * Default value : None.
 */
#ifndef Z_CONFIG_PASSWORD_KEY
#define Z_CONFIG_PASSWORD_KEY 0x44
#endif

/**
 * Activates/Deactivates multicast scouting.
 * Accepted values : `false`, `true`.
 * Default value : `true`.
 */
#ifndef Z_CONFIG_MULTICAST_SCOUTING_KEY
#define Z_CONFIG_MULTICAST_SCOUTING_KEY 0x45
#endif
#ifndef Z_CONFIG_MULTICAST_SCOUTING_DEFAULT
#define Z_CONFIG_MULTICAST_SCOUTING_DEFAULT "true"
#endif

/**
 * The multicast address and ports to use for multicast scouting.
 * Accepted values : `<ip address>:<port>`.
 * Default value : `"224.0.0.224:7446"`.
 */
#ifndef Z_CONFIG_MULTICAST_LOCATOR_KEY
#define Z_CONFIG_MULTICAST_LOCATOR_KEY 0x46
#endif
#ifndef Z_CONFIG_MULTICAST_LOCATOR_DEFAULT
#define Z_CONFIG_MULTICAST_LOCATOR_DEFAULT "udp/224.0.0.224:7446"
#endif

/**
 * In client mode, the period dedicated to scouting a router before failing.
 * Accepted values : `<int in milliseconds>`.
 * Default value : `"1000"`.
 */
#ifndef Z_CONFIG_SCOUTING_TIMEOUT_KEY
#define Z_CONFIG_SCOUTING_TIMEOUT_KEY 0x47
#endif
#ifndef Z_CONFIG_SCOUTING_TIMEOUT_DEFAULT
#define Z_CONFIG_SCOUTING_TIMEOUT_DEFAULT "1000"
#endif

/**
 * The entities to find in the multicast scouting, defined as a bitwise value.
 * Accepted values : [0-7]. Bitwise value are defined in :c:enum:`z_whatami_t`.
 * Default value : `3`.
 */
#ifndef Z_CONFIG_SCOUTING_WHAT_KEY
#define Z_CONFIG_SCOUTING_WHAT_KEY 0x48
#endif
#ifndef Z_CONFIG_SCOUTING_WHAT_DEFAULT
#define Z_CONFIG_SCOUTING_WHAT_DEFAULT "3"
#endif

/**
 * A configurable and static Zenoh ID to be used on Zenoh Sessions.
 * Accepted values : `<UUDI 128-bit>`.
 */
#ifndef Z_CONFIG_SESSION_ZID_KEY
#define Z_CONFIG_SESSION_ZID_KEY 0x49
#endif

/**
 * Indicates if data messages should be timestamped.
 * Accepted values : `false`, `true`.
 * Default value : `false`.
 */
#ifndef Z_CONFIG_ADD_TIMESTAMP_KEY
#define Z_CONFIG_ADD_TIMESTAMP_KEY 0x4A
#endif
#ifndef Z_CONFIG_ADD_TIMESTAMP_DEFAULT
#define Z_CONFIG_ADD_TIMESTAMP_DEFAULT "false"
#endif

/*------------------ TLS configuration properties ------------------*/
#ifndef Z_CONFIG_TLS_ROOT_CA_CERTIFICATE_KEY
#define Z_CONFIG_TLS_ROOT_CA_CERTIFICATE_KEY 0x4B
#endif
#ifndef Z_CONFIG_TLS_ROOT_CA_CERTIFICATE_BASE64_KEY
#define Z_CONFIG_TLS_ROOT_CA_CERTIFICATE_BASE64_KEY 0x4C
#endif
#ifndef Z_CONFIG_TLS_LISTEN_PRIVATE_KEY_KEY
#define Z_CONFIG_TLS_LISTEN_PRIVATE_KEY_KEY 0x4D
#endif
#ifndef Z_CONFIG_TLS_LISTEN_PRIVATE_KEY_BASE64_KEY
#define Z_CONFIG_TLS_LISTEN_PRIVATE_KEY_BASE64_KEY 0x4E
#endif
#ifndef Z_CONFIG_TLS_LISTEN_CERTIFICATE_KEY
#define Z_CONFIG_TLS_LISTEN_CERTIFICATE_KEY 0x4F
#endif
#ifndef Z_CONFIG_TLS_LISTEN_CERTIFICATE_BASE64_KEY
#define Z_CONFIG_TLS_LISTEN_CERTIFICATE_BASE64_KEY 0x50
#endif
#ifndef Z_CONFIG_TLS_ENABLE_MTLS_KEY
#define Z_CONFIG_TLS_ENABLE_MTLS_KEY 0x51
#endif
#ifndef Z_CONFIG_TLS_CONNECT_PRIVATE_KEY_KEY
#define Z_CONFIG_TLS_CONNECT_PRIVATE_KEY_KEY 0x52
#endif
#ifndef Z_CONFIG_TLS_CONNECT_PRIVATE_KEY_BASE64_KEY
#define Z_CONFIG_TLS_CONNECT_PRIVATE_KEY_BASE64_KEY 0x53
#endif
#ifndef Z_CONFIG_TLS_CONNECT_CERTIFICATE_KEY
#define Z_CONFIG_TLS_CONNECT_CERTIFICATE_KEY 0x54
#endif
#ifndef Z_CONFIG_TLS_CONNECT_CERTIFICATE_BASE64_KEY
#define Z_CONFIG_TLS_CONNECT_CERTIFICATE_BASE64_KEY 0x55
#endif
#ifndef Z_CONFIG_TLS_VERIFY_NAME_ON_CONNECT_KEY
#define Z_CONFIG_TLS_VERIFY_NAME_ON_CONNECT_KEY 0x56
#endif

/*------------------ Compile-time configuration properties ------------------*/
/**
 * Default length for Zenoh ID. Maximum size is 16 bytes.
 * This configuration will only be applied to Zenoh IDs generated by Zenoh-Pico.
 */
#ifndef Z_ZID_LENGTH
#define Z_ZID_LENGTH 16
#endif

/**
 * Protocol version identifier.
 * Do not change this value.
 */
#ifndef Z_PROTO_VERSION
#define Z_PROTO_VERSION 0x09
#endif

/**
 * Default session lease expire factor.
 */
#ifndef Z_TRANSPORT_LEASE_EXPIRE_FACTOR
#define Z_TRANSPORT_LEASE_EXPIRE_FACTOR 3
#endif

/**
 * Default multicast session join interval in milliseconds.
 */
#ifndef Z_JOIN_INTERVAL
#define Z_JOIN_INTERVAL 2500
#endif

#ifndef Z_SN_RESOLUTION
#define Z_SN_RESOLUTION 0x02
#endif
#ifndef Z_REQ_RESOLUTION
#define Z_REQ_RESOLUTION 0x02
#endif

/**
 * Default size for the rx cache size (if activated).
 */
#ifndef Z_RX_CACHE_SIZE
#define Z_RX_CACHE_SIZE 10
#endif

/**
 * Default get timeout in milliseconds.
 */
#ifndef Z_GET_TIMEOUT_DEFAULT
#define Z_GET_TIMEOUT_DEFAULT 10000
#endif

/**
 * Maximum number of connections for unicast listen sockets.
 */
#ifndef Z_LISTEN_MAX_CONNECTION_NB
#define Z_LISTEN_MAX_CONNECTION_NB 10
#endif

/**
 * Default "nop" instruction
 */
#ifndef ZP_ASM_NOP
#define ZP_ASM_NOP __asm__("nop")
#endif

#endif /* INCLUDE_ZENOH_PICO_CONFIG_H */
