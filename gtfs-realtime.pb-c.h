/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_gtfs_2drealtime_2eproto__INCLUDED
#define PROTOBUF_C_gtfs_2drealtime_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS


typedef struct _TransitRealtime__FeedMessage TransitRealtime__FeedMessage;
typedef struct _TransitRealtime__FeedHeader TransitRealtime__FeedHeader;
typedef struct _TransitRealtime__FeedEntity TransitRealtime__FeedEntity;
typedef struct _TransitRealtime__TripUpdate TransitRealtime__TripUpdate;
typedef struct _TransitRealtime__TripUpdate__StopTimeEvent TransitRealtime__TripUpdate__StopTimeEvent;
typedef struct _TransitRealtime__TripUpdate__StopTimeUpdate TransitRealtime__TripUpdate__StopTimeUpdate;
typedef struct _TransitRealtime__VehiclePosition TransitRealtime__VehiclePosition;
typedef struct _TransitRealtime__OVapiVehiclePosition TransitRealtime__OVapiVehiclePosition;
typedef struct _TransitRealtime__Alert TransitRealtime__Alert;
typedef struct _TransitRealtime__TimeRange TransitRealtime__TimeRange;
typedef struct _TransitRealtime__Position TransitRealtime__Position;
typedef struct _TransitRealtime__TripDescriptor TransitRealtime__TripDescriptor;
typedef struct _TransitRealtime__VehicleDescriptor TransitRealtime__VehicleDescriptor;
typedef struct _TransitRealtime__EntitySelector TransitRealtime__EntitySelector;
typedef struct _TransitRealtime__TranslatedString TransitRealtime__TranslatedString;
typedef struct _TransitRealtime__TranslatedString__Translation TransitRealtime__TranslatedString__Translation;


/* --- enums --- */

typedef enum _TransitRealtime__FeedHeader__Incrementality {
  TRANSIT_REALTIME__FEED_HEADER__INCREMENTALITY__FULL_DATASET = 0,
  TRANSIT_REALTIME__FEED_HEADER__INCREMENTALITY__DIFFERENTIAL = 1
} TransitRealtime__FeedHeader__Incrementality;
typedef enum _TransitRealtime__TripUpdate__StopTimeUpdate__ScheduleRelationship {
  TRANSIT_REALTIME__TRIP_UPDATE__STOP_TIME_UPDATE__SCHEDULE_RELATIONSHIP__SCHEDULED = 0,
  TRANSIT_REALTIME__TRIP_UPDATE__STOP_TIME_UPDATE__SCHEDULE_RELATIONSHIP__SKIPPED = 1,
  TRANSIT_REALTIME__TRIP_UPDATE__STOP_TIME_UPDATE__SCHEDULE_RELATIONSHIP__NO_DATA = 2
} TransitRealtime__TripUpdate__StopTimeUpdate__ScheduleRelationship;
typedef enum _TransitRealtime__VehiclePosition__VehicleStopStatus {
  TRANSIT_REALTIME__VEHICLE_POSITION__VEHICLE_STOP_STATUS__INCOMING_AT = 0,
  TRANSIT_REALTIME__VEHICLE_POSITION__VEHICLE_STOP_STATUS__STOPPED_AT = 1,
  TRANSIT_REALTIME__VEHICLE_POSITION__VEHICLE_STOP_STATUS__IN_TRANSIT_TO = 2
} TransitRealtime__VehiclePosition__VehicleStopStatus;
typedef enum _TransitRealtime__VehiclePosition__CongestionLevel {
  TRANSIT_REALTIME__VEHICLE_POSITION__CONGESTION_LEVEL__UNKNOWN_CONGESTION_LEVEL = 0,
  TRANSIT_REALTIME__VEHICLE_POSITION__CONGESTION_LEVEL__RUNNING_SMOOTHLY = 1,
  TRANSIT_REALTIME__VEHICLE_POSITION__CONGESTION_LEVEL__STOP_AND_GO = 2,
  TRANSIT_REALTIME__VEHICLE_POSITION__CONGESTION_LEVEL__CONGESTION = 3,
  TRANSIT_REALTIME__VEHICLE_POSITION__CONGESTION_LEVEL__SEVERE_CONGESTION = 4
} TransitRealtime__VehiclePosition__CongestionLevel;
typedef enum _TransitRealtime__Alert__Cause {
  TRANSIT_REALTIME__ALERT__CAUSE__UNKNOWN_CAUSE = 1,
  TRANSIT_REALTIME__ALERT__CAUSE__OTHER_CAUSE = 2,
  TRANSIT_REALTIME__ALERT__CAUSE__TECHNICAL_PROBLEM = 3,
  TRANSIT_REALTIME__ALERT__CAUSE__STRIKE = 4,
  TRANSIT_REALTIME__ALERT__CAUSE__DEMONSTRATION = 5,
  TRANSIT_REALTIME__ALERT__CAUSE__ACCIDENT = 6,
  TRANSIT_REALTIME__ALERT__CAUSE__HOLIDAY = 7,
  TRANSIT_REALTIME__ALERT__CAUSE__WEATHER = 8,
  TRANSIT_REALTIME__ALERT__CAUSE__MAINTENANCE = 9,
  TRANSIT_REALTIME__ALERT__CAUSE__CONSTRUCTION = 10,
  TRANSIT_REALTIME__ALERT__CAUSE__POLICE_ACTIVITY = 11,
  TRANSIT_REALTIME__ALERT__CAUSE__MEDICAL_EMERGENCY = 12
} TransitRealtime__Alert__Cause;
typedef enum _TransitRealtime__Alert__Effect {
  TRANSIT_REALTIME__ALERT__EFFECT__NO_SERVICE = 1,
  TRANSIT_REALTIME__ALERT__EFFECT__REDUCED_SERVICE = 2,
  TRANSIT_REALTIME__ALERT__EFFECT__SIGNIFICANT_DELAYS = 3,
  TRANSIT_REALTIME__ALERT__EFFECT__DETOUR = 4,
  TRANSIT_REALTIME__ALERT__EFFECT__ADDITIONAL_SERVICE = 5,
  TRANSIT_REALTIME__ALERT__EFFECT__MODIFIED_SERVICE = 6,
  TRANSIT_REALTIME__ALERT__EFFECT__OTHER_EFFECT = 7,
  TRANSIT_REALTIME__ALERT__EFFECT__UNKNOWN_EFFECT = 8,
  TRANSIT_REALTIME__ALERT__EFFECT__STOP_MOVED = 9
} TransitRealtime__Alert__Effect;
typedef enum _TransitRealtime__TripDescriptor__ScheduleRelationship {
  TRANSIT_REALTIME__TRIP_DESCRIPTOR__SCHEDULE_RELATIONSHIP__SCHEDULED = 0,
  TRANSIT_REALTIME__TRIP_DESCRIPTOR__SCHEDULE_RELATIONSHIP__ADDED = 1,
  TRANSIT_REALTIME__TRIP_DESCRIPTOR__SCHEDULE_RELATIONSHIP__UNSCHEDULED = 2,
  TRANSIT_REALTIME__TRIP_DESCRIPTOR__SCHEDULE_RELATIONSHIP__CANCELED = 3,
  TRANSIT_REALTIME__TRIP_DESCRIPTOR__SCHEDULE_RELATIONSHIP__REPLACEMENT = 5
} TransitRealtime__TripDescriptor__ScheduleRelationship;

/* --- messages --- */

struct  _TransitRealtime__FeedMessage
{
  ProtobufCMessage base;
  TransitRealtime__FeedHeader *header;
  size_t n_entity;
  TransitRealtime__FeedEntity **entity;
};
#define TRANSIT_REALTIME__FEED_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__feed_message__descriptor) \
    , NULL, 0,NULL }


struct  _TransitRealtime__FeedHeader
{
  ProtobufCMessage base;
  char *gtfs_realtime_version;
  protobuf_c_boolean has_incrementality;
  TransitRealtime__FeedHeader__Incrementality incrementality;
  protobuf_c_boolean has_timestamp;
  uint64_t timestamp;
};
#define TRANSIT_REALTIME__FEED_HEADER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__feed_header__descriptor) \
    , NULL, 0,TRANSIT_REALTIME__FEED_HEADER__INCREMENTALITY__FULL_DATASET, 0,0 }


struct  _TransitRealtime__FeedEntity
{
  ProtobufCMessage base;
  char *id;
  protobuf_c_boolean has_is_deleted;
  protobuf_c_boolean is_deleted;
  TransitRealtime__TripUpdate *trip_update;
  TransitRealtime__VehiclePosition *vehicle;
  TransitRealtime__Alert *alert;
};
#define TRANSIT_REALTIME__FEED_ENTITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__feed_entity__descriptor) \
    , NULL, 0,0, NULL, NULL, NULL }


struct  _TransitRealtime__TripUpdate__StopTimeEvent
{
  ProtobufCMessage base;
  protobuf_c_boolean has_delay;
  int32_t delay;
  protobuf_c_boolean has_time;
  int64_t time;
  protobuf_c_boolean has_uncertainty;
  int32_t uncertainty;
};
#define TRANSIT_REALTIME__TRIP_UPDATE__STOP_TIME_EVENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__trip_update__stop_time_event__descriptor) \
    , 0,0, 0,0, 0,0 }


struct  _TransitRealtime__TripUpdate__StopTimeUpdate
{
  ProtobufCMessage base;
  protobuf_c_boolean has_stop_sequence;
  uint32_t stop_sequence;
  char *stop_id;
  TransitRealtime__TripUpdate__StopTimeEvent *arrival;
  TransitRealtime__TripUpdate__StopTimeEvent *departure;
  protobuf_c_boolean has_schedule_relationship;
  TransitRealtime__TripUpdate__StopTimeUpdate__ScheduleRelationship schedule_relationship;
};
#define TRANSIT_REALTIME__TRIP_UPDATE__STOP_TIME_UPDATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__trip_update__stop_time_update__descriptor) \
    , 0,0, NULL, NULL, NULL, 0,TRANSIT_REALTIME__TRIP_UPDATE__STOP_TIME_UPDATE__SCHEDULE_RELATIONSHIP__SCHEDULED }


struct  _TransitRealtime__TripUpdate
{
  ProtobufCMessage base;
  TransitRealtime__TripDescriptor *trip;
  TransitRealtime__VehicleDescriptor *vehicle;
  size_t n_stop_time_update;
  TransitRealtime__TripUpdate__StopTimeUpdate **stop_time_update;
  protobuf_c_boolean has_timestamp;
  uint64_t timestamp;
};
#define TRANSIT_REALTIME__TRIP_UPDATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__trip_update__descriptor) \
    , NULL, NULL, 0,NULL, 0,0 }


struct  _TransitRealtime__VehiclePosition
{
  ProtobufCMessage base;
  TransitRealtime__TripDescriptor *trip;
  TransitRealtime__VehicleDescriptor *vehicle;
  TransitRealtime__Position *position;
  protobuf_c_boolean has_current_stop_sequence;
  uint32_t current_stop_sequence;
  char *stop_id;
  protobuf_c_boolean has_current_status;
  TransitRealtime__VehiclePosition__VehicleStopStatus current_status;
  protobuf_c_boolean has_timestamp;
  uint64_t timestamp;
  protobuf_c_boolean has_congestion_level;
  TransitRealtime__VehiclePosition__CongestionLevel congestion_level;
  TransitRealtime__OVapiVehiclePosition *ovapi_vehicle_position;
};
#define TRANSIT_REALTIME__VEHICLE_POSITION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__vehicle_position__descriptor) \
    , NULL, NULL, NULL, 0,0, NULL, 0,TRANSIT_REALTIME__VEHICLE_POSITION__VEHICLE_STOP_STATUS__IN_TRANSIT_TO, 0,0, 0,0, NULL }


struct  _TransitRealtime__OVapiVehiclePosition
{
  ProtobufCMessage base;
  protobuf_c_boolean has_delay;
  int32_t delay;
};
#define TRANSIT_REALTIME__OVAPI_VEHICLE_POSITION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__ovapi_vehicle_position__descriptor) \
    , 0,0 }


struct  _TransitRealtime__Alert
{
  ProtobufCMessage base;
  size_t n_active_period;
  TransitRealtime__TimeRange **active_period;
  size_t n_informed_entity;
  TransitRealtime__EntitySelector **informed_entity;
  protobuf_c_boolean has_cause;
  TransitRealtime__Alert__Cause cause;
  protobuf_c_boolean has_effect;
  TransitRealtime__Alert__Effect effect;
  TransitRealtime__TranslatedString *url;
  TransitRealtime__TranslatedString *header_text;
  TransitRealtime__TranslatedString *description_text;
};
#define TRANSIT_REALTIME__ALERT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__alert__descriptor) \
    , 0,NULL, 0,NULL, 0,TRANSIT_REALTIME__ALERT__CAUSE__UNKNOWN_CAUSE, 0,TRANSIT_REALTIME__ALERT__EFFECT__UNKNOWN_EFFECT, NULL, NULL, NULL }


struct  _TransitRealtime__TimeRange
{
  ProtobufCMessage base;
  protobuf_c_boolean has_start;
  uint64_t start;
  protobuf_c_boolean has_end;
  uint64_t end;
};
#define TRANSIT_REALTIME__TIME_RANGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__time_range__descriptor) \
    , 0,0, 0,0 }


struct  _TransitRealtime__Position
{
  ProtobufCMessage base;
  float latitude;
  float longitude;
  protobuf_c_boolean has_bearing;
  float bearing;
  protobuf_c_boolean has_odometer;
  double odometer;
  protobuf_c_boolean has_speed;
  float speed;
};
#define TRANSIT_REALTIME__POSITION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__position__descriptor) \
    , 0, 0, 0,0, 0,0, 0,0 }


struct  _TransitRealtime__TripDescriptor
{
  ProtobufCMessage base;
  char *trip_id;
  char *route_id;
  char *start_time;
  char *start_date;
  protobuf_c_boolean has_schedule_relationship;
  TransitRealtime__TripDescriptor__ScheduleRelationship schedule_relationship;
};
#define TRANSIT_REALTIME__TRIP_DESCRIPTOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__trip_descriptor__descriptor) \
    , NULL, NULL, NULL, NULL, 0,0 }


struct  _TransitRealtime__VehicleDescriptor
{
  ProtobufCMessage base;
  char *id;
  char *label;
  char *license_plate;
};
#define TRANSIT_REALTIME__VEHICLE_DESCRIPTOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__vehicle_descriptor__descriptor) \
    , NULL, NULL, NULL }


struct  _TransitRealtime__EntitySelector
{
  ProtobufCMessage base;
  char *agency_id;
  char *route_id;
  protobuf_c_boolean has_route_type;
  int32_t route_type;
  TransitRealtime__TripDescriptor *trip;
  char *stop_id;
};
#define TRANSIT_REALTIME__ENTITY_SELECTOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__entity_selector__descriptor) \
    , NULL, NULL, 0,0, NULL, NULL }


struct  _TransitRealtime__TranslatedString__Translation
{
  ProtobufCMessage base;
  char *text;
  char *language;
};
#define TRANSIT_REALTIME__TRANSLATED_STRING__TRANSLATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__translated_string__translation__descriptor) \
    , NULL, NULL }


struct  _TransitRealtime__TranslatedString
{
  ProtobufCMessage base;
  size_t n_translation;
  TransitRealtime__TranslatedString__Translation **translation;
};
#define TRANSIT_REALTIME__TRANSLATED_STRING__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&transit_realtime__translated_string__descriptor) \
    , 0,NULL }


/* TransitRealtime__FeedMessage methods */
void   transit_realtime__feed_message__init
                     (TransitRealtime__FeedMessage         *message);
size_t transit_realtime__feed_message__get_packed_size
                     (const TransitRealtime__FeedMessage   *message);
size_t transit_realtime__feed_message__pack
                     (const TransitRealtime__FeedMessage   *message,
                      uint8_t             *out);
size_t transit_realtime__feed_message__pack_to_buffer
                     (const TransitRealtime__FeedMessage   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__FeedMessage *
       transit_realtime__feed_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__feed_message__free_unpacked
                     (TransitRealtime__FeedMessage *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__FeedHeader methods */
void   transit_realtime__feed_header__init
                     (TransitRealtime__FeedHeader         *message);
size_t transit_realtime__feed_header__get_packed_size
                     (const TransitRealtime__FeedHeader   *message);
size_t transit_realtime__feed_header__pack
                     (const TransitRealtime__FeedHeader   *message,
                      uint8_t             *out);
size_t transit_realtime__feed_header__pack_to_buffer
                     (const TransitRealtime__FeedHeader   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__FeedHeader *
       transit_realtime__feed_header__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__feed_header__free_unpacked
                     (TransitRealtime__FeedHeader *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__FeedEntity methods */
void   transit_realtime__feed_entity__init
                     (TransitRealtime__FeedEntity         *message);
size_t transit_realtime__feed_entity__get_packed_size
                     (const TransitRealtime__FeedEntity   *message);
size_t transit_realtime__feed_entity__pack
                     (const TransitRealtime__FeedEntity   *message,
                      uint8_t             *out);
size_t transit_realtime__feed_entity__pack_to_buffer
                     (const TransitRealtime__FeedEntity   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__FeedEntity *
       transit_realtime__feed_entity__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__feed_entity__free_unpacked
                     (TransitRealtime__FeedEntity *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__TripUpdate__StopTimeEvent methods */
void   transit_realtime__trip_update__stop_time_event__init
                     (TransitRealtime__TripUpdate__StopTimeEvent         *message);
/* TransitRealtime__TripUpdate__StopTimeUpdate methods */
void   transit_realtime__trip_update__stop_time_update__init
                     (TransitRealtime__TripUpdate__StopTimeUpdate         *message);
/* TransitRealtime__TripUpdate methods */
void   transit_realtime__trip_update__init
                     (TransitRealtime__TripUpdate         *message);
size_t transit_realtime__trip_update__get_packed_size
                     (const TransitRealtime__TripUpdate   *message);
size_t transit_realtime__trip_update__pack
                     (const TransitRealtime__TripUpdate   *message,
                      uint8_t             *out);
size_t transit_realtime__trip_update__pack_to_buffer
                     (const TransitRealtime__TripUpdate   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__TripUpdate *
       transit_realtime__trip_update__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__trip_update__free_unpacked
                     (TransitRealtime__TripUpdate *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__VehiclePosition methods */
void   transit_realtime__vehicle_position__init
                     (TransitRealtime__VehiclePosition         *message);
size_t transit_realtime__vehicle_position__get_packed_size
                     (const TransitRealtime__VehiclePosition   *message);
size_t transit_realtime__vehicle_position__pack
                     (const TransitRealtime__VehiclePosition   *message,
                      uint8_t             *out);
size_t transit_realtime__vehicle_position__pack_to_buffer
                     (const TransitRealtime__VehiclePosition   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__VehiclePosition *
       transit_realtime__vehicle_position__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__vehicle_position__free_unpacked
                     (TransitRealtime__VehiclePosition *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__OVapiVehiclePosition methods */
void   transit_realtime__ovapi_vehicle_position__init
                     (TransitRealtime__OVapiVehiclePosition         *message);
size_t transit_realtime__ovapi_vehicle_position__get_packed_size
                     (const TransitRealtime__OVapiVehiclePosition   *message);
size_t transit_realtime__ovapi_vehicle_position__pack
                     (const TransitRealtime__OVapiVehiclePosition   *message,
                      uint8_t             *out);
size_t transit_realtime__ovapi_vehicle_position__pack_to_buffer
                     (const TransitRealtime__OVapiVehiclePosition   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__OVapiVehiclePosition *
       transit_realtime__ovapi_vehicle_position__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__ovapi_vehicle_position__free_unpacked
                     (TransitRealtime__OVapiVehiclePosition *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__Alert methods */
void   transit_realtime__alert__init
                     (TransitRealtime__Alert         *message);
size_t transit_realtime__alert__get_packed_size
                     (const TransitRealtime__Alert   *message);
size_t transit_realtime__alert__pack
                     (const TransitRealtime__Alert   *message,
                      uint8_t             *out);
size_t transit_realtime__alert__pack_to_buffer
                     (const TransitRealtime__Alert   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__Alert *
       transit_realtime__alert__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__alert__free_unpacked
                     (TransitRealtime__Alert *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__TimeRange methods */
void   transit_realtime__time_range__init
                     (TransitRealtime__TimeRange         *message);
size_t transit_realtime__time_range__get_packed_size
                     (const TransitRealtime__TimeRange   *message);
size_t transit_realtime__time_range__pack
                     (const TransitRealtime__TimeRange   *message,
                      uint8_t             *out);
size_t transit_realtime__time_range__pack_to_buffer
                     (const TransitRealtime__TimeRange   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__TimeRange *
       transit_realtime__time_range__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__time_range__free_unpacked
                     (TransitRealtime__TimeRange *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__Position methods */
void   transit_realtime__position__init
                     (TransitRealtime__Position         *message);
size_t transit_realtime__position__get_packed_size
                     (const TransitRealtime__Position   *message);
size_t transit_realtime__position__pack
                     (const TransitRealtime__Position   *message,
                      uint8_t             *out);
size_t transit_realtime__position__pack_to_buffer
                     (const TransitRealtime__Position   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__Position *
       transit_realtime__position__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__position__free_unpacked
                     (TransitRealtime__Position *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__TripDescriptor methods */
void   transit_realtime__trip_descriptor__init
                     (TransitRealtime__TripDescriptor         *message);
size_t transit_realtime__trip_descriptor__get_packed_size
                     (const TransitRealtime__TripDescriptor   *message);
size_t transit_realtime__trip_descriptor__pack
                     (const TransitRealtime__TripDescriptor   *message,
                      uint8_t             *out);
size_t transit_realtime__trip_descriptor__pack_to_buffer
                     (const TransitRealtime__TripDescriptor   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__TripDescriptor *
       transit_realtime__trip_descriptor__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__trip_descriptor__free_unpacked
                     (TransitRealtime__TripDescriptor *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__VehicleDescriptor methods */
void   transit_realtime__vehicle_descriptor__init
                     (TransitRealtime__VehicleDescriptor         *message);
size_t transit_realtime__vehicle_descriptor__get_packed_size
                     (const TransitRealtime__VehicleDescriptor   *message);
size_t transit_realtime__vehicle_descriptor__pack
                     (const TransitRealtime__VehicleDescriptor   *message,
                      uint8_t             *out);
size_t transit_realtime__vehicle_descriptor__pack_to_buffer
                     (const TransitRealtime__VehicleDescriptor   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__VehicleDescriptor *
       transit_realtime__vehicle_descriptor__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__vehicle_descriptor__free_unpacked
                     (TransitRealtime__VehicleDescriptor *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__EntitySelector methods */
void   transit_realtime__entity_selector__init
                     (TransitRealtime__EntitySelector         *message);
size_t transit_realtime__entity_selector__get_packed_size
                     (const TransitRealtime__EntitySelector   *message);
size_t transit_realtime__entity_selector__pack
                     (const TransitRealtime__EntitySelector   *message,
                      uint8_t             *out);
size_t transit_realtime__entity_selector__pack_to_buffer
                     (const TransitRealtime__EntitySelector   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__EntitySelector *
       transit_realtime__entity_selector__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__entity_selector__free_unpacked
                     (TransitRealtime__EntitySelector *message,
                      ProtobufCAllocator *allocator);
/* TransitRealtime__TranslatedString__Translation methods */
void   transit_realtime__translated_string__translation__init
                     (TransitRealtime__TranslatedString__Translation         *message);
/* TransitRealtime__TranslatedString methods */
void   transit_realtime__translated_string__init
                     (TransitRealtime__TranslatedString         *message);
size_t transit_realtime__translated_string__get_packed_size
                     (const TransitRealtime__TranslatedString   *message);
size_t transit_realtime__translated_string__pack
                     (const TransitRealtime__TranslatedString   *message,
                      uint8_t             *out);
size_t transit_realtime__translated_string__pack_to_buffer
                     (const TransitRealtime__TranslatedString   *message,
                      ProtobufCBuffer     *buffer);
TransitRealtime__TranslatedString *
       transit_realtime__translated_string__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   transit_realtime__translated_string__free_unpacked
                     (TransitRealtime__TranslatedString *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*TransitRealtime__FeedMessage_Closure)
                 (const TransitRealtime__FeedMessage *message,
                  void *closure_data);
typedef void (*TransitRealtime__FeedHeader_Closure)
                 (const TransitRealtime__FeedHeader *message,
                  void *closure_data);
typedef void (*TransitRealtime__FeedEntity_Closure)
                 (const TransitRealtime__FeedEntity *message,
                  void *closure_data);
typedef void (*TransitRealtime__TripUpdate__StopTimeEvent_Closure)
                 (const TransitRealtime__TripUpdate__StopTimeEvent *message,
                  void *closure_data);
typedef void (*TransitRealtime__TripUpdate__StopTimeUpdate_Closure)
                 (const TransitRealtime__TripUpdate__StopTimeUpdate *message,
                  void *closure_data);
typedef void (*TransitRealtime__TripUpdate_Closure)
                 (const TransitRealtime__TripUpdate *message,
                  void *closure_data);
typedef void (*TransitRealtime__VehiclePosition_Closure)
                 (const TransitRealtime__VehiclePosition *message,
                  void *closure_data);
typedef void (*TransitRealtime__OVapiVehiclePosition_Closure)
                 (const TransitRealtime__OVapiVehiclePosition *message,
                  void *closure_data);
typedef void (*TransitRealtime__Alert_Closure)
                 (const TransitRealtime__Alert *message,
                  void *closure_data);
typedef void (*TransitRealtime__TimeRange_Closure)
                 (const TransitRealtime__TimeRange *message,
                  void *closure_data);
typedef void (*TransitRealtime__Position_Closure)
                 (const TransitRealtime__Position *message,
                  void *closure_data);
typedef void (*TransitRealtime__TripDescriptor_Closure)
                 (const TransitRealtime__TripDescriptor *message,
                  void *closure_data);
typedef void (*TransitRealtime__VehicleDescriptor_Closure)
                 (const TransitRealtime__VehicleDescriptor *message,
                  void *closure_data);
typedef void (*TransitRealtime__EntitySelector_Closure)
                 (const TransitRealtime__EntitySelector *message,
                  void *closure_data);
typedef void (*TransitRealtime__TranslatedString__Translation_Closure)
                 (const TransitRealtime__TranslatedString__Translation *message,
                  void *closure_data);
typedef void (*TransitRealtime__TranslatedString_Closure)
                 (const TransitRealtime__TranslatedString *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor transit_realtime__feed_message__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__feed_header__descriptor;
extern const ProtobufCEnumDescriptor    transit_realtime__feed_header__incrementality__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__feed_entity__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__trip_update__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__trip_update__stop_time_event__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__trip_update__stop_time_update__descriptor;
extern const ProtobufCEnumDescriptor    transit_realtime__trip_update__stop_time_update__schedule_relationship__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__vehicle_position__descriptor;
extern const ProtobufCEnumDescriptor    transit_realtime__vehicle_position__vehicle_stop_status__descriptor;
extern const ProtobufCEnumDescriptor    transit_realtime__vehicle_position__congestion_level__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__ovapi_vehicle_position__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__alert__descriptor;
extern const ProtobufCEnumDescriptor    transit_realtime__alert__cause__descriptor;
extern const ProtobufCEnumDescriptor    transit_realtime__alert__effect__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__time_range__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__position__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__trip_descriptor__descriptor;
extern const ProtobufCEnumDescriptor    transit_realtime__trip_descriptor__schedule_relationship__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__vehicle_descriptor__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__entity_selector__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__translated_string__descriptor;
extern const ProtobufCMessageDescriptor transit_realtime__translated_string__translation__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_gtfs_2drealtime_2eproto__INCLUDED */
