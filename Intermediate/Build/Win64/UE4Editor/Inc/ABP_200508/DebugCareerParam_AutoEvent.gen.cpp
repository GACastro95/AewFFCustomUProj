// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DebugCareerParam_AutoEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCareerParam_AutoEvent() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
class UScriptStruct* FDebugCareerParam_AutoEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DebugCareerParam_AutoEvent"), sizeof(FDebugCareerParam_AutoEvent), Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDebugCareerParam_AutoEvent>()
{
	return FDebugCareerParam_AutoEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCareerParam_AutoEvent(FDebugCareerParam_AutoEvent::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DebugCareerParam_AutoEvent"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_AutoEvent
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_AutoEvent()
	{
		UScriptStruct::DeferCppStructOps<FDebugCareerParam_AutoEvent>(FName(TEXT("DebugCareerParam_AutoEvent")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_AutoEvent;
	struct Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ePlayer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ePlayer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eRival_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eRival_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eRival;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eDate_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartTrigger_MetaData[];
#endif
		static void NewProp_bStartTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbortTrigger_MetaData[];
#endif
		static void NewProp_bAbortTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAbortTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResumeTrigger_MetaData[];
#endif
		static void NewProp_bResumeTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResumeTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugInfo_MetaData[];
#endif
		static void NewProp_bDebugInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCareerParam_AutoEvent>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_ePlayer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_ePlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_ePlayer = { "ePlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoEvent, ePlayer), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_ePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_ePlayer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eRival_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eRival_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eRival = { "eRival", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoEvent, eRival), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eRival_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eRival_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eDate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eDate = { "eDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoEvent, eDate), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_StartNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_StartNo = { "StartNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoEvent, StartNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_StartNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_StartNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_EndNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_EndNo = { "EndNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugCareerParam_AutoEvent, EndNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_EndNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_EndNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bStartTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bStartTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoEvent*)Obj)->bStartTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bStartTrigger = { "bStartTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoEvent), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bStartTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bStartTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bStartTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bAbortTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bAbortTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoEvent*)Obj)->bAbortTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bAbortTrigger = { "bAbortTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoEvent), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bAbortTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bAbortTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bAbortTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bResumeTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bResumeTrigger_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoEvent*)Obj)->bResumeTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bResumeTrigger = { "bResumeTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoEvent), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bResumeTrigger_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bResumeTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bResumeTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bDebugInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_AutoEvent" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_AutoEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bDebugInfo_SetBit(void* Obj)
	{
		((FDebugCareerParam_AutoEvent*)Obj)->bDebugInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bDebugInfo = { "bDebugInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_AutoEvent), &Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bDebugInfo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bDebugInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bDebugInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_ePlayer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_ePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eRival_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eRival,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eDate_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_eDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_StartNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_EndNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bStartTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bAbortTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bResumeTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::NewProp_bDebugInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DebugCareerParam_AutoEvent",
		sizeof(FDebugCareerParam_AutoEvent),
		alignof(FDebugCareerParam_AutoEvent),
		Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCareerParam_AutoEvent"), sizeof(FDebugCareerParam_AutoEvent), Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_AutoEvent_Hash() { return 2067042166U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
