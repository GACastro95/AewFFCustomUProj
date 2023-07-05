// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSErrorTextDataToAWS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSErrorTextDataToAWS() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToAWS();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EErrDialogType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSErrorTextDataToAWS>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSErrorTextDataToAWS cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSErrorTextDataToAWS::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSErrorTextDataToAWS"), sizeof(FSSErrorTextDataToAWS), Get_Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSErrorTextDataToAWS>()
{
	return FSSErrorTextDataToAWS::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSErrorTextDataToAWS(FSSErrorTextDataToAWS::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSErrorTextDataToAWS"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextDataToAWS
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextDataToAWS()
	{
		UScriptStruct::DeferCppStructOps<FSSErrorTextDataToAWS>(FName(TEXT("SSErrorTextDataToAWS")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextDataToAWS;
	struct Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorRetry_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorRetry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowErrorCode_MetaData[];
#endif
		static void NewProp_ShowErrorCode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowErrorCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowErrorCodeForSwitch_MetaData[];
#endif
		static void NewProp_ShowErrorCodeForSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowErrorCodeForSwitch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OverrideErrDialogType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideErrDialogType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OverrideErrDialogType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToAWS.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSErrorTextDataToAWS>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToAWS" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToAWS.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorKey = { "ErrorKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextDataToAWS, ErrorKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToAWS" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToAWS.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorID = { "ErrorID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextDataToAWS, ErrorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToAWS" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToAWS.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextDataToAWS, ErrorText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorRetry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToAWS" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToAWS.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorRetry = { "ErrorRetry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextDataToAWS, ErrorRetry), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorRetry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorRetry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToAWS" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToAWS.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCode_SetBit(void* Obj)
	{
		((FSSErrorTextDataToAWS*)Obj)->ShowErrorCode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCode = { "ShowErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSErrorTextDataToAWS), &Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCodeForSwitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToAWS" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToAWS.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCodeForSwitch_SetBit(void* Obj)
	{
		((FSSErrorTextDataToAWS*)Obj)->ShowErrorCodeForSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCodeForSwitch = { "ShowErrorCodeForSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSErrorTextDataToAWS), &Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCodeForSwitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCodeForSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCodeForSwitch_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_OverrideErrDialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_OverrideErrDialogType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToAWS" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToAWS.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_OverrideErrDialogType = { "OverrideErrDialogType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextDataToAWS, OverrideErrDialogType), Z_Construct_UEnum_yGS2Client_EErrDialogType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_OverrideErrDialogType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_OverrideErrDialogType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ErrorRetry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_ShowErrorCodeForSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_OverrideErrDialogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::NewProp_OverrideErrDialogType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSErrorTextDataToAWS",
		sizeof(FSSErrorTextDataToAWS),
		alignof(FSSErrorTextDataToAWS),
		Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToAWS()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSErrorTextDataToAWS"), sizeof(FSSErrorTextDataToAWS), Get_Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextDataToAWS_Hash() { return 3059306112U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
