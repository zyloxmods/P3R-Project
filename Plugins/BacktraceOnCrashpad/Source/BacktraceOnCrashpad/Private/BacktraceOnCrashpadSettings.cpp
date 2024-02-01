#include "BacktraceOnCrashpadSettings.h"

UBacktraceOnCrashpadSettings::UBacktraceOnCrashpadSettings() {
    this->BacktraceURL = TEXT("https://submit.backtrace.io/segaamerica/e40330f46a4dc82b0f2643892bf6eaf40022b713efeff54bad73e4180dd94080/minidump");
    this->BacktraceToken = TEXT("e40330f46a4dc82b0f2643892bf6eaf40022b713efeff54bad73e4180dd94080");
    this->CrashpadDatabasePath = TEXT("%APPDATA%/SEGA/P3R/Microsoft/dump");
}

