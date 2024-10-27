// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Obstacles/SecondMovablePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondMovablePlatform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
OBSTACLES_API UClass* Z_Construct_UClass_ASecondMovablePlatform();
OBSTACLES_API UClass* Z_Construct_UClass_ASecondMovablePlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_Obstacles();
// End Cross Module References

// Begin Class ASecondMovablePlatform
void ASecondMovablePlatform::StaticRegisterNativesASecondMovablePlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondMovablePlatform);
UClass* Z_Construct_UClass_ASecondMovablePlatform_NoRegister()
{
	return ASecondMovablePlatform::StaticClass();
}
struct Z_Construct_UClass_ASecondMovablePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SecondMovablePlatform.h" },
		{ "ModuleRelativePath", "SecondMovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformLocation_MetaData[] = {
		{ "Category", "SecondMovablePlatform" },
		{ "ModuleRelativePath", "SecondMovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLocation_MetaData[] = {
		{ "Category", "SecondMovablePlatform" },
		{ "ModuleRelativePath", "SecondMovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLocation_MetaData[] = {
		{ "Category", "SecondMovablePlatform" },
		{ "ModuleRelativePath", "SecondMovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steps_MetaData[] = {
		{ "Category", "SecondMovablePlatform" },
		{ "ModuleRelativePath", "SecondMovablePlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Steps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondMovablePlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASecondMovablePlatform_Statics::NewProp_PlatformLocation = { "PlatformLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondMovablePlatform, PlatformLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformLocation_MetaData), NewProp_PlatformLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASecondMovablePlatform_Statics::NewProp_MaxLocation = { "MaxLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondMovablePlatform, MaxLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLocation_MetaData), NewProp_MaxLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASecondMovablePlatform_Statics::NewProp_MinLocation = { "MinLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondMovablePlatform, MinLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLocation_MetaData), NewProp_MinLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASecondMovablePlatform_Statics::NewProp_Steps = { "Steps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondMovablePlatform, Steps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steps_MetaData), NewProp_Steps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASecondMovablePlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondMovablePlatform_Statics::NewProp_PlatformLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondMovablePlatform_Statics::NewProp_MaxLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondMovablePlatform_Statics::NewProp_MinLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondMovablePlatform_Statics::NewProp_Steps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondMovablePlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASecondMovablePlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Obstacles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondMovablePlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondMovablePlatform_Statics::ClassParams = {
	&ASecondMovablePlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASecondMovablePlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASecondMovablePlatform_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondMovablePlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondMovablePlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASecondMovablePlatform()
{
	if (!Z_Registration_Info_UClass_ASecondMovablePlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondMovablePlatform.OuterSingleton, Z_Construct_UClass_ASecondMovablePlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASecondMovablePlatform.OuterSingleton;
}
template<> OBSTACLES_API UClass* StaticClass<ASecondMovablePlatform>()
{
	return ASecondMovablePlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondMovablePlatform);
ASecondMovablePlatform::~ASecondMovablePlatform() {}
// End Class ASecondMovablePlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_SecondMovablePlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASecondMovablePlatform, ASecondMovablePlatform::StaticClass, TEXT("ASecondMovablePlatform"), &Z_Registration_Info_UClass_ASecondMovablePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondMovablePlatform), 2502761563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_SecondMovablePlatform_h_3053456799(TEXT("/Script/Obstacles"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_SecondMovablePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_SecondMovablePlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
