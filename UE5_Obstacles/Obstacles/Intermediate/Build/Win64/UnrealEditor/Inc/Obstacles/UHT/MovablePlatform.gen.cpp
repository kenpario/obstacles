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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntTest_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntA_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntB_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntAPlusB_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatTest_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatA_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatB_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatTotal_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolTest_MetaData[] = {
		{ "Category", "MovablePlatform" },
		{ "ModuleRelativePath", "MovablePlatform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntTest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntAPlusB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatTest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatA;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatTotal;
	static void NewProp_BoolTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolTest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovablePlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_IntTest = { "IntTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, IntTest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntTest_MetaData), NewProp_IntTest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_IntA = { "IntA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, IntA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntA_MetaData), NewProp_IntA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_IntB = { "IntB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, IntB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntB_MetaData), NewProp_IntB_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_IntAPlusB = { "IntAPlusB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, IntAPlusB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntAPlusB_MetaData), NewProp_IntAPlusB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_FloatTest = { "FloatTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, FloatTest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatTest_MetaData), NewProp_FloatTest_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_FloatA = { "FloatA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, FloatA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatA_MetaData), NewProp_FloatA_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_FloatB = { "FloatB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, FloatB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatB_MetaData), NewProp_FloatB_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_FloatTotal = { "FloatTotal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovablePlatform, FloatTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatTotal_MetaData), NewProp_FloatTotal_MetaData) };
void Z_Construct_UClass_AMovablePlatform_Statics::NewProp_BoolTest_SetBit(void* Obj)
{
	((AMovablePlatform*)Obj)->BoolTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovablePlatform_Statics::NewProp_BoolTest = { "BoolTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovablePlatform), &Z_Construct_UClass_AMovablePlatform_Statics::NewProp_BoolTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolTest_MetaData), NewProp_BoolTest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovablePlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_IntTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_IntA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_IntB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_IntAPlusB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_FloatTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_FloatA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_FloatB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_FloatTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovablePlatform_Statics::NewProp_BoolTest,
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
		{ Z_Construct_UClass_AMovablePlatform, AMovablePlatform::StaticClass, TEXT("AMovablePlatform"), &Z_Registration_Info_UClass_AMovablePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovablePlatform), 3938533407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_MovablePlatform_h_496869842(TEXT("/Script/Obstacles"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_MovablePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Games_Obstacle_obstacles_UE5_Obstacles_Obstacles_Source_Obstacles_MovablePlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
