// /thermostat/UI/HomeScreen/HeatSelectDialog.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qtimezone.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmllist.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _thermostat_UI_HomeScreen_HeatSelectDialog_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x3f,0x0,0x0,0x0,0x1,0x7,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1c,0xa,0x0,0x0,0x34,0x30,0x34,0x63,
0x33,0x61,0x66,0x64,0x66,0x39,0x30,0x37,
0x31,0x36,0x32,0x65,0x32,0x63,0x61,0x32,
0x34,0x66,0x62,0x36,0x35,0x39,0x38,0x63,
0x34,0x37,0x38,0x66,0x64,0x31,0x30,0x66,
0x31,0x39,0x66,0x65,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xd1,0x57,0xe6,0xf1,
0xd4,0x76,0x41,0x45,0x78,0xb1,0x19,0x7f,
0xd0,0x1b,0x7e,0x39,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x78,0x3,0x0,0x0,
0x6,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0xa,0x0,0x0,0x0,0x14,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x3c,0x1,0x0,0x0,
0x3,0x0,0x0,0x0,0x40,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x58,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x58,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x58,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x58,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x58,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x58,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x58,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x70,0x6,0x0,0x0,
0x58,0x1,0x0,0x0,0xb8,0x1,0x0,0x0,
0x8,0x2,0x0,0x0,0x68,0x2,0x0,0x0,
0xb8,0x2,0x0,0x0,0x10,0x3,0x0,0x0,
0x68,0x3,0x0,0x0,0x53,0x1,0x0,0x0,
0x64,0x1,0x0,0x0,0x73,0x1,0x0,0x0,
0x33,0x0,0x0,0x0,0x40,0x0,0x0,0x0,
0x73,0x1,0x0,0x0,0x73,0x1,0x0,0x0,
0xe0,0x0,0x0,0x0,0x73,0x1,0x0,0x0,
0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x40,0xfd,0x3f,
0x0,0x0,0x0,0x0,0x0,0xc0,0x3,0x0,
0x9a,0x99,0x99,0x99,0x99,0xd9,0x1c,0x40,
0x44,0x0,0x0,0x0,0x18,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xe,0x0,0x0,0x0,
0x9,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x9,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x0,0x18,0x7,
0x14,0x1,0xa,0x14,0x1,0xb,0x14,0x1,
0xc,0x14,0x1,0xd,0xac,0x1,0x7,0x4,
0xa,0x18,0x6,0x2,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x2,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xd,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0xca,0x2e,0x3,0x3c,0x4,0x18,0x6,0xd4,
0x16,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x5,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x8,0x0,0x0,0x0,
0x11,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x6,0x3c,0x7,
0x18,0x7,0x10,0x2,0x9e,0x7,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x8,0x0,0x0,0x0,
0x12,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x8,0x3c,0x9,
0x18,0x7,0x4,0x2,0x9c,0x7,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd8,0x3,0x0,0x0,0xe0,0x3,0x0,0x0,
0xf8,0x3,0x0,0x0,0x10,0x4,0x0,0x0,
0x38,0x4,0x0,0x0,0x50,0x4,0x0,0x0,
0x68,0x4,0x0,0x0,0x78,0x4,0x0,0x0,
0xa8,0x4,0x0,0x0,0xb8,0x4,0x0,0x0,
0xe8,0x4,0x0,0x0,0x0,0x5,0x0,0x0,
0x18,0x5,0x0,0x0,0x50,0x5,0x0,0x0,
0x78,0x5,0x0,0x0,0x88,0x5,0x0,0x0,
0xb8,0x5,0x0,0x0,0xd0,0x5,0x0,0x0,
0x0,0x6,0x0,0x0,0x10,0x6,0x0,0x0,
0x28,0x6,0x0,0x0,0x38,0x6,0x0,0x0,
0x48,0x6,0x0,0x0,0x58,0x6,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x61,0x0,0x6e,0x0,
0x67,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x61,0x0,0x74,0x0,0x53,0x0,0x65,0x0,
0x6c,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x44,0x0,0x69,0x0,0x61,0x0,0x6c,0x0,
0x6f,0x0,0x67,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x64,0x0,0x65,0x0,
0x73,0x0,0x74,0x0,0x72,0x0,0x6f,0x0,
0x79,0x0,0x4d,0x0,0x65,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x61,0x0,0x6e,0x0,
0x63,0x0,0x68,0x0,0x6f,0x0,0x72,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x66,0x0,0x69,0x0,
0x6c,0x0,0x6c,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x66,0x0,0x69,0x0,0x6c,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x63,0x0,0x6f,0x0,0x6c,0x0,
0x6f,0x0,0x72,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x4d,0x0,0x6f,0x0,
0x75,0x0,0x73,0x0,0x65,0x0,0x41,0x0,
0x72,0x0,0x65,0x0,0x61,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x43,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x43,0x0,
0x6c,0x0,0x69,0x0,0x63,0x0,0x6b,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x69,0x0,0x6e,0x0,
0x6e,0x0,0x65,0x0,0x72,0x0,0x52,0x0,
0x65,0x0,0x63,0x0,0x74,0x0,0x61,0x0,
0x6e,0x0,0x67,0x0,0x6c,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x77,0x0,0x69,0x0,0x64,0x0,
0x74,0x0,0x68,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x68,0x0,0x65,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x74,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x62,0x0,0x6c,0x0,
0x61,0x0,0x63,0x0,0x6b,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x62,0x0,0x6f,0x0,
0x72,0x0,0x64,0x0,0x65,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x68,0x0,
0x69,0x0,0x74,0x0,0x65,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x72,0x0,0x67,0x0,
0x62,0x0,0x61,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x24,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xf,0x2,0x0,0x0,0x3c,0x0,0x0,0x0,
0x4,0x1,0x0,0x0,0x74,0x1,0x0,0x0,
0xfc,0x1,0x0,0x0,0x6c,0x2,0x0,0x0,
0x24,0x3,0x0,0x0,0x2,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x1,0x0,0x4,0x0,0x58,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb8,0x0,0x0,0x0,
0x4,0x0,0x10,0x0,0x5,0x0,0x50,0x0,
0xb8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb8,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x9,0x0,0x50,0x0,
0x9,0x0,0xc0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x50,0x0,
0xb,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf,0x0,0x50,0x0,
0xf,0x0,0x50,0x0,0x5,0x0,0x0,0x0,
0x0,0x0,0xa,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x0,0x50,0x0,
0x8,0x0,0xd0,0x0,0x4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6,0x0,0xc0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0xd0,0x0,0x8,0x0,0x30,0x1,
0x0,0x0,0x0,0x0,0xa,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0xb,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x90,0x0,0xd,0x0,0x40,0x1,
0x5,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0xc,0x0,0x10,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x10,0x1,0xc,0x0,0x70,0x1,
0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x4,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0xf,0x0,0x50,0x0,0x10,0x0,0x90,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x0,
0x13,0x0,0x90,0x0,0x13,0x0,0x0,0x1,
0x10,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x90,0x0,0x12,0x0,0x10,0x1,
0xe,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x90,0x0,0x11,0x0,0x0,0x1,
0x13,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x90,0x0,0x14,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x14,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x1,0x15,0x0,0x70,0x1,
0x8,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x0,
0x14,0x0,0x0,0x1,0x14,0x0,0x70,0x1,
0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr)
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           *static_cast<return_type *>(dataPtr) = binding(aotContext, argumentsPtr);
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for color at line 9, column 5
QObject *r7_0;
QObject *r2_0;
double r13_0;
QVariant r2_1;
double r12_0;
double r11_0;
double r10_0;
// generate_LoadQmlContextPropertyLookup
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadSingletonLookup(0, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadSingletonLookup(0, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError())
    return QVariant();
}
{
}
// generate_StoreReg
r7_0 = r2_0;
{
}
// generate_MoveConst
r10_0 = double(0);
{
}
// generate_MoveConst
r11_0 = double(0);
{
}
// generate_MoveConst
r12_0 = double(0);
{
}
// generate_MoveConst
r13_0 = double(0);
{
}
// generate_CallPropertyLookup
{
QVariant callResult;
void *args[] = { &callResult, &r10_0, &r11_0, &r12_0, &r13_0 };
const QMetaType types[] = { QMetaType::fromType<QVariant>(), QMetaType::fromType<double>(), QMetaType::fromType<double>(), QMetaType::fromType<double>(), QMetaType::fromType<double>() };
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(21);
#endif
while (!aotContext->callObjectPropertyLookup(1, r7_0, args, types, 4)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(21);
#endif
aotContext->initCallObjectPropertyLookup(1);
if (aotContext->engine->hasError())
    return QVariant();
}
r2_1 = std::move(callResult);
}
{
}
{
}
// generate_Ret
if (!r2_1.isValid())
    aotContext->setReturnValueUndefined();
return r2_1;
});}
 },{ 1, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for fill at line 8, column 5
QObject *r2_0;
// generate_LoadQmlContextPropertyLookup
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadScopeObjectPropertyLookup(2, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadScopeObjectPropertyLookup(2, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
{
}
{
}
// generate_Ret
return r2_0;
});}
 },{ 2, QMetaType::fromType<void>(), { QMetaType::fromType<QObject *>() }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for onClicked at line 13, column 9
// generate_CreateCallContext
{
{
}
{
}
{
}
{
}
// generate_PopContext
{}
}
{
}
{
}
// generate_Ret
return;
});}
 },{ 3, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for fill at line 12, column 9
QObject *r2_0;
// generate_LoadQmlContextPropertyLookup
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadScopeObjectPropertyLookup(5, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadScopeObjectPropertyLookup(5, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
{
}
{
}
// generate_Ret
return r2_0;
});}
 },{ 4, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for width at line 17, column 9
QObject *r2_0;
double r2_2;
double r7_0;
double r2_1;
// generate_LoadQmlContextPropertyLookup
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadScopeObjectPropertyLookup(6, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadScopeObjectPropertyLookup(6, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return double();
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getObjectLookup(7, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetObjectLookup(7, r2_0, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
{
}
// generate_StoreReg
r7_0 = r2_1;
{
}
// generate_LoadInt
r2_2 = double(2);
{
}
// generate_Div
r2_2 = (r7_0 / r2_2);
{
}
{
}
// generate_Ret
return r2_2;
});}
 },{ 5, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for height at line 18, column 9
double r2_1;
QObject *r2_0;
double r7_0;
double r2_2;
// generate_LoadQmlContextPropertyLookup
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadScopeObjectPropertyLookup(8, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadScopeObjectPropertyLookup(8, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return double();
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getObjectLookup(9, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetObjectLookup(9, r2_0, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
{
}
// generate_StoreReg
r7_0 = r2_1;
{
}
// generate_LoadConst
r2_2 = 0.80000000000000004;
{
}
// generate_Mul
r2_2 = (r7_0 * r2_2);
{
}
{
}
// generate_Ret
return r2_2;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}