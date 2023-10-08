// Copyright Epic Games, Inc. All Rights Reserved.

#include "FasterHardDrives.h"

#define LOCTEXT_NAMESPACE "FFasterHardDrivesModule"

void FFasterHardDrivesModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FFasterHardDrivesModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFasterHardDrivesModule, FasterHardDrives)