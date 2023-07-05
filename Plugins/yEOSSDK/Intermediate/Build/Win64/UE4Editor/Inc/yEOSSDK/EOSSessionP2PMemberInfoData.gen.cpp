// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PMemberInfoData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PMemberInfoData() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSSessionP2PMemberInfoData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSSessionP2PMemberInfoData"), sizeof(FEOSSessionP2PMemberInfoData), Get_Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSSessionP2PMemberInfoData>()
{
	return FEOSSessionP2PMemberInfoData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSSessionP2PMemberInfoData(FEOSSessionP2PMemberInfoData::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSSessionP2PMemberInfoData"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PMemberInfoData
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PMemberInfoData()
	{
		UScriptStruct::DeferCppStructOps<FEOSSessionP2PMemberInfoData>(FName(TEXT("EOSSessionP2PMemberInfoData")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSessionP2PMemberInfoData;
	struct Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Removed_MetaData[];
#endif
		static void NewProp_Removed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Removed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disconnected_MetaData[];
#endif
		static void NewProp_Disconnected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disconnected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSSessionP2PMemberInfoData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PMemberInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PMemberInfoData, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_MemberIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PMemberInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_MemberIndex = { "MemberIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSessionP2PMemberInfoData, MemberIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_MemberIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_MemberIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Removed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PMemberInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Removed_SetBit(void* Obj)
	{
		((FEOSSessionP2PMemberInfoData*)Obj)->Removed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Removed = { "Removed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSSessionP2PMemberInfoData), &Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Removed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Removed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Removed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Disconnected_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PMemberInfoData" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PMemberInfoData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Disconnected_SetBit(void* Obj)
	{
		((FEOSSessionP2PMemberInfoData*)Obj)->Disconnected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Disconnected = { "Disconnected", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEOSSessionP2PMemberInfoData), &Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Disconnected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Disconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Disconnected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_MemberIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Removed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::NewProp_Disconnected,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSSessionP2PMemberInfoData",
		sizeof(FEOSSessionP2PMemberInfoData),
		alignof(FEOSSessionP2PMemberInfoData),
		Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSSessionP2PMemberInfoData"), sizeof(FEOSSessionP2PMemberInfoData), Get_Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSSessionP2PMemberInfoData_Hash() { return 2792416332U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
