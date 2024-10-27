// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Obstacles/MovablePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovablePlatform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
OBSTACLES_API UClass* Z_Construct_UClass_AMovablePlatform();
OBSTACLES_API UClass* Z_Construct_UClass_AMovablePlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_Obstacles();
// End Cross Module References

// Begin Class AMovablePlatform
void AMovablePlatform::StaticRegisterNativesAMovablePlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovablePlatform);
UClass* Z_Construct_UClass_AMovablePlatform_NoRegister()
{
	return AMovablePlatform::StaticClass();
}
struct Z_Construct_UClass_AMovablePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovablePlatform.h" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformLocation_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLocation_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLocation_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformRotation_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSteps_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationSteps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovablePlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_PlatformLocation = { "PlatformLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, PlatformLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformLocation_MetaData), NewProp_PlatformLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_MaxLocation = { "MaxLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, MaxLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLocation_MetaData), NewProp_MaxLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_MinLocation = { "MinLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, MinLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLocation_MetaData), NewProp_MinLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_PlatformRotation = { "PlatformRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, PlatformRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformRotation_MetaData), NewProp_PlatformRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_RotationSteps = { "RotationSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, RotationSteps), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSteps_MetaData), NewProp_RotationSteps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovablePlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_PlatformLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_MaxLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_MinLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_Steps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_PlatformRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_RotationSteps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovablePlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovablePlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Obstacles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovablePlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovablePlatform_Statics::ClassParams = {
	&AMovablePlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovablePlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovablePlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovablePlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovablePlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovablePlatform()
{
	if (!Z_Registration_Info_UClass_AMovablePlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovablePlatform.OuterSingleton, Z_Construct_UClass_AMovablePlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovablePlatform.OuterSingleton;
}
template<> OBSTACLES_API UClass* StaticClass<AMovablePlatform>()
{
	return AMovablePlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovablePlatform);
AMovablePlatform::~AMovablePlatform() {}
// End Class AMovablePlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_MovablePlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovablePlatform, AMovablePlatform::StaticClass, TEXT("AMovablePlatform"), &Z_Registration_Info_UClass_AMovablePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovablePlatform), 3163252622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_MovablePlatform_h_1685815736(TEXT("/Script/Obstacles"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_MovablePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_MovablePlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
