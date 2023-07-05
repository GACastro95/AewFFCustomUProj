// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSButtonHoldState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSButtonHoldState() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSButtonHoldState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger();
// End Cross Module References
class UScriptStruct* FSSButtonHoldState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSButtonHoldState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSButtonHoldState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSButtonHoldState"), sizeof(FSSButtonHoldState), Get_Z_Construct_UScriptStruct_FSSButtonHoldState_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSButtonHoldState>()
{
	return FSSButtonHoldState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSButtonHoldState(FSSButtonHoldState::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSButtonHoldState"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSButtonHoldState
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSButtonHoldState()
	{
		UScriptStruct::DeferCppStructOps<FSSButtonHoldState>(FName(TEXT("SSButtonHoldState")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSButtonHoldState;
	struct Z_Construct_UScriptStruct_FSSButtonHoldState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawHold_MetaData[];
#endif
		static void NewProp_RawHold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RawHold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hold_MetaData[];
#endif
		static void NewProp_Hold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongPressTriggered_MetaData[];
#endif
		static void NewProp_LongPressTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LongPressTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoldTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TapTrigger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TapTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TapTrigger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LongPressTrigger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongPressTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LongPressTrigger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DashTapTrigger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashTapTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DashTapTrigger;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DashLongPressTrigger_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashLongPressTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DashLongPressTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSButtonHoldState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_RawHold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSButtonHoldState" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_RawHold_SetBit(void* Obj)
	{
		((FSSButtonHoldState*)Obj)->RawHold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_RawHold = { "RawHold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSButtonHoldState), &Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_RawHold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_RawHold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_RawHold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_Hold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSButtonHoldState" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_Hold_SetBit(void* Obj)
	{
		((FSSButtonHoldState*)Obj)->Hold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSButtonHoldState), &Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_Hold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_Hold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTriggered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSButtonHoldState" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTriggered_SetBit(void* Obj)
	{
		((FSSButtonHoldState*)Obj)->LongPressTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTriggered = { "LongPressTriggered", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSButtonHoldState), &Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTriggered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_HoldTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSButtonHoldState" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_HoldTime = { "HoldTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSButtonHoldState, HoldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_HoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_HoldTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_TapTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_TapTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSButtonHoldState" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_TapTrigger = { "TapTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSButtonHoldState, TapTrigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_TapTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_TapTrigger_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSButtonHoldState" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTrigger = { "LongPressTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSButtonHoldState, LongPressTrigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTrigger_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashTapTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashTapTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSButtonHoldState" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashTapTrigger = { "DashTapTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSButtonHoldState, DashTapTrigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashTapTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashTapTrigger_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashLongPressTrigger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashLongPressTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSButtonHoldState" },
		{ "ModuleRelativePath", "Public/SSButtonHoldState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashLongPressTrigger = { "DashLongPressTrigger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSButtonHoldState, DashLongPressTrigger), Z_Construct_UEnum_ABP_200508_ESSActionTransitTrigger, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashLongPressTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashLongPressTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_RawHold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_Hold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_HoldTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_TapTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_TapTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_LongPressTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashTapTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashTapTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashLongPressTrigger_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::NewProp_DashLongPressTrigger,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSButtonHoldState",
		sizeof(FSSButtonHoldState),
		alignof(FSSButtonHoldState),
		Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSButtonHoldState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSButtonHoldState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSButtonHoldState"), sizeof(FSSButtonHoldState), Get_Z_Construct_UScriptStruct_FSSButtonHoldState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSButtonHoldState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSButtonHoldState_Hash() { return 235280068U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
