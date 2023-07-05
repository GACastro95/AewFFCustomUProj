// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NVIDIAGfeSDK/Public/GfeSDKPermissionsChangedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGfeSDKPermissionsChangedData() {}
// Cross Module References
	NVIDIAGFESDK_API UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData();
	UPackage* Z_Construct_UPackage__Script_NVIDIAGfeSDK();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKPermission();
	NVIDIAGFESDK_API UEnum* Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope();
// End Cross Module References
class UScriptStruct* FGfeSDKPermissionsChangedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NVIDIAGFESDK_API uint32 Get_Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData, Z_Construct_UPackage__Script_NVIDIAGfeSDK(), TEXT("GfeSDKPermissionsChangedData"), sizeof(FGfeSDKPermissionsChangedData), Get_Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Hash());
	}
	return Singleton;
}
template<> NVIDIAGFESDK_API UScriptStruct* StaticStruct<FGfeSDKPermissionsChangedData>()
{
	return FGfeSDKPermissionsChangedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGfeSDKPermissionsChangedData(FGfeSDKPermissionsChangedData::StaticStruct, TEXT("/Script/NVIDIAGfeSDK"), TEXT("GfeSDKPermissionsChangedData"), false, nullptr, nullptr);
static struct FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKPermissionsChangedData
{
	FScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKPermissionsChangedData()
	{
		UScriptStruct::DeferCppStructOps<FGfeSDKPermissionsChangedData>(FName(TEXT("GfeSDKPermissionsChangedData")));
	}
} ScriptStruct_NVIDIAGfeSDK_StaticRegisterNativesFGfeSDKPermissionsChangedData;
	struct Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScopePermissions_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScopePermissions_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScopePermissions_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScopePermissions_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopePermissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ScopePermissions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GfeSDKPermissionsChangedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGfeSDKPermissionsChangedData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_ValueProp = { "ScopePermissions", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKPermission, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_Key_KeyProp = { "ScopePermissions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NVIDIAGfeSDK_EGfeSDKScope, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GfeSDKPermissionsChangedData" },
		{ "ModuleRelativePath", "Public/GfeSDKPermissionsChangedData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions = { "ScopePermissions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGfeSDKPermissionsChangedData, ScopePermissions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::NewProp_ScopePermissions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NVIDIAGfeSDK,
		nullptr,
		&NewStructOps,
		"GfeSDKPermissionsChangedData",
		sizeof(FGfeSDKPermissionsChangedData),
		alignof(FGfeSDKPermissionsChangedData),
		Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NVIDIAGfeSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GfeSDKPermissionsChangedData"), sizeof(FGfeSDKPermissionsChangedData), Get_Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGfeSDKPermissionsChangedData_Hash() { return 3370860024U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
