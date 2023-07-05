// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSStationalCameraLocatorParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSStationalCameraLocatorParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSStationalCameraLookAt();
// End Cross Module References
class UScriptStruct* FSSStationalCameraLocatorParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSStationalCameraLocatorParam"), sizeof(FSSStationalCameraLocatorParam), Get_Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSStationalCameraLocatorParam>()
{
	return FSSStationalCameraLocatorParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSStationalCameraLocatorParam(FSSStationalCameraLocatorParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSStationalCameraLocatorParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSStationalCameraLocatorParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSStationalCameraLocatorParam()
	{
		UScriptStruct::DeferCppStructOps<FSSStationalCameraLocatorParam>(FName(TEXT("SSStationalCameraLocatorParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSStationalCameraLocatorParam;
	struct Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocatorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocatorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocalLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocalLength;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LookAtMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LookAtMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAtOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookAtOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackingInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrackingInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SatelliteMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SatelliteMoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSStationalCameraLocatorParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraLocatorParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraLocatorParam, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraLocatorParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraLocatorParam, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LocatorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraLocatorParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LocatorId = { "LocatorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraLocatorParam, LocatorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LocatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LocatorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_FocalLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraLocatorParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_FocalLength = { "FocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraLocatorParam, FocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_FocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_FocalLength_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraLocatorParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtMode = { "LookAtMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraLocatorParam, LookAtMode), Z_Construct_UEnum_ABP_200508_ESSStationalCameraLookAt, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraLocatorParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtOffset = { "LookAtOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraLocatorParam, LookAtOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_TrackingInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraLocatorParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_TrackingInterpSpeed = { "TrackingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraLocatorParam, TrackingInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_TrackingInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_TrackingInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_SatelliteMoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSStationalCameraLocatorParam" },
		{ "ModuleRelativePath", "Public/SSStationalCameraLocatorParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_SatelliteMoveSpeed = { "SatelliteMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSStationalCameraLocatorParam, SatelliteMoveSpeed), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_SatelliteMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_SatelliteMoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LocatorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_FocalLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_LookAtOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_TrackingInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::NewProp_SatelliteMoveSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSStationalCameraLocatorParam",
		sizeof(FSSStationalCameraLocatorParam),
		alignof(FSSStationalCameraLocatorParam),
		Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSStationalCameraLocatorParam"), sizeof(FSSStationalCameraLocatorParam), Get_Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSStationalCameraLocatorParam_Hash() { return 1951130259U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
