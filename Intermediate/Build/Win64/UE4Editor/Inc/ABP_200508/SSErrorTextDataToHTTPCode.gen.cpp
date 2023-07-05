// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSErrorTextDataToHTTPCode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSErrorTextDataToHTTPCode() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSErrorTextDataToHTTPCode>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSErrorTextDataToHTTPCode cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSErrorTextDataToHTTPCode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSErrorTextDataToHTTPCode"), sizeof(FSSErrorTextDataToHTTPCode), Get_Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSErrorTextDataToHTTPCode>()
{
	return FSSErrorTextDataToHTTPCode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSErrorTextDataToHTTPCode(FSSErrorTextDataToHTTPCode::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSErrorTextDataToHTTPCode"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextDataToHTTPCode
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextDataToHTTPCode()
	{
		UScriptStruct::DeferCppStructOps<FSSErrorTextDataToHTTPCode>(FName(TEXT("SSErrorTextDataToHTTPCode")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSErrorTextDataToHTTPCode;
	struct Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ErrorType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorText;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToHTTPCode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSErrorTextDataToHTTPCode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToHTTPCode" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToHTTPCode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextDataToHTTPCode, ErrorType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToHTTPCode" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToHTTPCode.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorText = { "ErrorText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSErrorTextDataToHTTPCode, ErrorText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToHTTPCode" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToHTTPCode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCode_SetBit(void* Obj)
	{
		((FSSErrorTextDataToHTTPCode*)Obj)->ShowErrorCode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCode = { "ShowErrorCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSErrorTextDataToHTTPCode), &Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCodeForSwitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSErrorTextDataToHTTPCode" },
		{ "ModuleRelativePath", "Public/SSErrorTextDataToHTTPCode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCodeForSwitch_SetBit(void* Obj)
	{
		((FSSErrorTextDataToHTTPCode*)Obj)->ShowErrorCodeForSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCodeForSwitch = { "ShowErrorCodeForSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSErrorTextDataToHTTPCode), &Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCodeForSwitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCodeForSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCodeForSwitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ErrorText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::NewProp_ShowErrorCodeForSwitch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSErrorTextDataToHTTPCode",
		sizeof(FSSErrorTextDataToHTTPCode),
		alignof(FSSErrorTextDataToHTTPCode),
		Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSErrorTextDataToHTTPCode"), sizeof(FSSErrorTextDataToHTTPCode), Get_Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSErrorTextDataToHTTPCode_Hash() { return 741085280U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
