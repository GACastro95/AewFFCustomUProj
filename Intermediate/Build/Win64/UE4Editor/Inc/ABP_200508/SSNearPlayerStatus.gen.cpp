// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSNearPlayerStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSNearPlayerStatus() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSNearPlayerStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FSSNearPlayerStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSNearPlayerStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSNearPlayerStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSNearPlayerStatus"), sizeof(FSSNearPlayerStatus), Get_Z_Construct_UScriptStruct_FSSNearPlayerStatus_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSNearPlayerStatus>()
{
	return FSSNearPlayerStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSNearPlayerStatus(FSSNearPlayerStatus::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSNearPlayerStatus"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSNearPlayerStatus
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSNearPlayerStatus()
	{
		UScriptStruct::DeferCppStructOps<FSSNearPlayerStatus>(FName(TEXT("SSNearPlayerStatus")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSNearPlayerStatus;
	struct Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HpRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KoHpRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KoHpRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShieldDurabilityRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShieldDurabilityRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleOnlineID_MetaData[];
#endif
		static void NewProp_VisibleOnlineID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleOnlineID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSNearPlayerStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSNearPlayerStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_HpRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNearPlayerStatus" },
		{ "ModuleRelativePath", "Public/SSNearPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_HpRatio = { "HpRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNearPlayerStatus, HpRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_HpRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_HpRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_KoHpRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNearPlayerStatus" },
		{ "ModuleRelativePath", "Public/SSNearPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_KoHpRatio = { "KoHpRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNearPlayerStatus, KoHpRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_KoHpRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_KoHpRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_ShieldDurabilityRatio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNearPlayerStatus" },
		{ "ModuleRelativePath", "Public/SSNearPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_ShieldDurabilityRatio = { "ShieldDurabilityRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNearPlayerStatus, ShieldDurabilityRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_ShieldDurabilityRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_ShieldDurabilityRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_VisibleOnlineID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNearPlayerStatus" },
		{ "ModuleRelativePath", "Public/SSNearPlayerStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_VisibleOnlineID_SetBit(void* Obj)
	{
		((FSSNearPlayerStatus*)Obj)->VisibleOnlineID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_VisibleOnlineID = { "VisibleOnlineID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSNearPlayerStatus), &Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_VisibleOnlineID_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_VisibleOnlineID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_VisibleOnlineID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_Player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSNearPlayerStatus" },
		{ "ModuleRelativePath", "Public/SSNearPlayerStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSNearPlayerStatus, Player), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_HpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_KoHpRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_ShieldDurabilityRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_VisibleOnlineID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::NewProp_Player,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSNearPlayerStatus",
		sizeof(FSSNearPlayerStatus),
		alignof(FSSNearPlayerStatus),
		Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSNearPlayerStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSNearPlayerStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSNearPlayerStatus"), sizeof(FSSNearPlayerStatus), Get_Z_Construct_UScriptStruct_FSSNearPlayerStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSNearPlayerStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSNearPlayerStatus_Hash() { return 2796757154U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
