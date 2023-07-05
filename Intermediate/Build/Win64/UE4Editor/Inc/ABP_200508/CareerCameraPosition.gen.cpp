// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerCameraPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerCameraPosition() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerCameraPosition();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
class UScriptStruct* FCareerCameraPosition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerCameraPosition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerCameraPosition, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerCameraPosition"), sizeof(FCareerCameraPosition), Get_Z_Construct_UScriptStruct_FCareerCameraPosition_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerCameraPosition>()
{
	return FCareerCameraPosition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerCameraPosition(FCareerCameraPosition::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerCameraPosition"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCameraPosition
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCameraPosition()
	{
		UScriptStruct::DeferCppStructOps<FCareerCameraPosition>(FName(TEXT("CareerCameraPosition")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerCameraPosition;
	struct Z_Construct_UScriptStruct_FCareerCameraPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fChangeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fChangeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transformCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transformCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transformCameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transformCameraArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerCameraPosition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerCameraPosition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fChangeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fChangeTime = { "fChangeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCameraPosition, fChangeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fChangeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fChangeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fArmLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fArmLength = { "fArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCameraPosition, fArmLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCamera = { "transformCamera", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCameraPosition, transformCamera), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCameraArm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCameraPosition" },
		{ "ModuleRelativePath", "Public/CareerCameraPosition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCameraArm = { "transformCameraArm", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCameraPosition, transformCameraArm), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCameraArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCameraArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fChangeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_fArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::NewProp_transformCameraArm,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerCameraPosition",
		sizeof(FCareerCameraPosition),
		alignof(FCareerCameraPosition),
		Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerCameraPosition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerCameraPosition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerCameraPosition"), sizeof(FCareerCameraPosition), Get_Z_Construct_UScriptStruct_FCareerCameraPosition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerCameraPosition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerCameraPosition_Hash() { return 444722934U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
