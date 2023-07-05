// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSVoiceDeviceInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSVoiceDeviceInfo() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSVoiceDeviceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSVoiceDeviceInfo"), sizeof(FEOSVoiceDeviceInfo), Get_Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSVoiceDeviceInfo>()
{
	return FEOSVoiceDeviceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSVoiceDeviceInfo(FEOSVoiceDeviceInfo::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSVoiceDeviceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSVoiceDeviceInfo
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSVoiceDeviceInfo()
	{
		UScriptStruct::DeferCppStructOps<FEOSVoiceDeviceInfo>(FName(TEXT("EOSVoiceDeviceInfo")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSVoiceDeviceInfo;
	struct Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDefault_MetaData[];
#endif
		static void NewProp_IsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSVoiceDeviceInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSVoiceDeviceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceDeviceInfo" },
		{ "ModuleRelativePath", "Public/EOSVoiceDeviceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceDeviceInfo" },
		{ "ModuleRelativePath", "Public/EOSVoiceDeviceInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceID = { "DeviceID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceDeviceInfo, DeviceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_IsDefault_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceDeviceInfo" },
		{ "ModuleRelativePath", "Public/EOSVoiceDeviceInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_IsDefault_SetBit(void* Obj)
	{
		((FEOSVoiceDeviceInfo*)Obj)->IsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_IsDefault = { "IsDefault", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSVoiceDeviceInfo), &Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_IsDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_IsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_IsDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_DeviceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::NewProp_IsDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSVoiceDeviceInfo",
		sizeof(FEOSVoiceDeviceInfo),
		alignof(FEOSVoiceDeviceInfo),
		Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSVoiceDeviceInfo"), sizeof(FEOSVoiceDeviceInfo), Get_Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSVoiceDeviceInfo_Hash() { return 137621283U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
