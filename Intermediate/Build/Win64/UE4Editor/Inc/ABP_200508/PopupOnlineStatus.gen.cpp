// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/PopupOnlineStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePopupOnlineStatus() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPopupOnlineStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType();
// End Cross Module References
class UScriptStruct* FPopupOnlineStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FPopupOnlineStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPopupOnlineStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("PopupOnlineStatus"), sizeof(FPopupOnlineStatus), Get_Z_Construct_UScriptStruct_FPopupOnlineStatus_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FPopupOnlineStatus>()
{
	return FPopupOnlineStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPopupOnlineStatus(FPopupOnlineStatus::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("PopupOnlineStatus"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFPopupOnlineStatus
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFPopupOnlineStatus()
	{
		UScriptStruct::DeferCppStructOps<FPopupOnlineStatus>(FName(TEXT("PopupOnlineStatus")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFPopupOnlineStatus;
	struct Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExecUserName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetUserName_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUserName_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetUserName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PopupOnlineStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPopupOnlineStatus>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_StatusType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_StatusType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PopupOnlineStatus" },
		{ "ModuleRelativePath", "Public/PopupOnlineStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_StatusType = { "StatusType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPopupOnlineStatus, StatusType), Z_Construct_UEnum_ABP_200508_EPopupOnlineStatusType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_StatusType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_StatusType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_ExecUserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PopupOnlineStatus" },
		{ "ModuleRelativePath", "Public/PopupOnlineStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_ExecUserName = { "ExecUserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPopupOnlineStatus, ExecUserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_ExecUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_ExecUserName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_TargetUserName_Inner = { "TargetUserName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_TargetUserName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PopupOnlineStatus" },
		{ "ModuleRelativePath", "Public/PopupOnlineStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_TargetUserName = { "TargetUserName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPopupOnlineStatus, TargetUserName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_TargetUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_TargetUserName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_StatusType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_StatusType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_ExecUserName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_TargetUserName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::NewProp_TargetUserName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"PopupOnlineStatus",
		sizeof(FPopupOnlineStatus),
		alignof(FPopupOnlineStatus),
		Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPopupOnlineStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPopupOnlineStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PopupOnlineStatus"), sizeof(FPopupOnlineStatus), Get_Z_Construct_UScriptStruct_FPopupOnlineStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPopupOnlineStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPopupOnlineStatus_Hash() { return 3823496601U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
