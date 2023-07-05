// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCameraCorrectVolumeInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCameraCorrectVolumeInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType();
// End Cross Module References
class UScriptStruct* FSSCameraCorrectVolumeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCameraCorrectVolumeInfo"), sizeof(FSSCameraCorrectVolumeInfo), Get_Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCameraCorrectVolumeInfo>()
{
	return FSSCameraCorrectVolumeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCameraCorrectVolumeInfo(FSSCameraCorrectVolumeInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCameraCorrectVolumeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraCorrectVolumeInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraCorrectVolumeInfo()
	{
		UScriptStruct::DeferCppStructOps<FSSCameraCorrectVolumeInfo>(FName(TEXT("SSCameraCorrectVolumeInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCameraCorrectVolumeInfo;
	struct Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraPlaceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPlaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraPlaceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCameraCorrectVolumeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCameraCorrectVolumeInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_Priority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraCorrectVolumeInfo" },
		{ "ModuleRelativePath", "Public/SSCameraCorrectVolumeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraCorrectVolumeInfo, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_CameraPlaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_CameraPlaceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCameraCorrectVolumeInfo" },
		{ "ModuleRelativePath", "Public/SSCameraCorrectVolumeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_CameraPlaceType = { "CameraPlaceType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCameraCorrectVolumeInfo, CameraPlaceType), Z_Construct_UEnum_ABP_200508_ESSCameraPlaceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_CameraPlaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_CameraPlaceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_Priority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_CameraPlaceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::NewProp_CameraPlaceType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSCameraCorrectVolumeInfo",
		sizeof(FSSCameraCorrectVolumeInfo),
		alignof(FSSCameraCorrectVolumeInfo),
		Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCameraCorrectVolumeInfo"), sizeof(FSSCameraCorrectVolumeInfo), Get_Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCameraCorrectVolumeInfo_Hash() { return 438175069U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
