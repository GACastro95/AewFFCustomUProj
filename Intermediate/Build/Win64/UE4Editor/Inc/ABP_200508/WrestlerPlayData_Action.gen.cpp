// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/WrestlerPlayData_Action.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerPlayData_Action() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerPlayData_Action();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FWrestlerPlayData_Action>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FWrestlerPlayData_Action cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FWrestlerPlayData_Action::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrestlerPlayData_Action, Z_Construct_UPackage__Script_ABP_200508(), TEXT("WrestlerPlayData_Action"), sizeof(FWrestlerPlayData_Action), Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FWrestlerPlayData_Action>()
{
	return FWrestlerPlayData_Action::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrestlerPlayData_Action(FWrestlerPlayData_Action::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("WrestlerPlayData_Action"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFWrestlerPlayData_Action
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFWrestlerPlayData_Action()
	{
		UScriptStruct::DeferCppStructOps<FWrestlerPlayData_Action>(FName(TEXT("WrestlerPlayData_Action")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFWrestlerPlayData_Action;
	struct Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StrikeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StroungStrikeCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StroungStrikeCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GrappleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StroungGrappleCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StroungGrappleCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrishWhipCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IrishWhipCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinisherCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PinCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TauntCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TauntCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeGuardCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StrikeGuardCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleGuardCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GrappleGuardCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiveCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DiveCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringboardCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpringboardCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PinBreakCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PinBreakCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReversalForIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReversalForIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialMoveReversalForIdle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialMoveReversalForIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReversalForNoOperate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReversalForNoOperate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialMoveReversalForNoOperate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpecialMoveReversalForNoOperate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrestlerPlayData_Action>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeCount = { "StrikeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, StrikeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungStrikeCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungStrikeCount = { "StroungStrikeCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, StroungStrikeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungStrikeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungStrikeCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleCount = { "GrappleCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, GrappleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungGrappleCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungGrappleCount = { "StroungGrappleCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, StroungGrappleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungGrappleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungGrappleCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_IrishWhipCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_IrishWhipCount = { "IrishWhipCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, IrishWhipCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_IrishWhipCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_IrishWhipCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_FinisherCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_FinisherCount = { "FinisherCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, FinisherCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_FinisherCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_FinisherCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinCount = { "PinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, PinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_TauntCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_TauntCount = { "TauntCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, TauntCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_TauntCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_TauntCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DashCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DashCount = { "DashCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, DashCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DashCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DashCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StepCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StepCount = { "StepCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, StepCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StepCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StepCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeGuardCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeGuardCount = { "StrikeGuardCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, StrikeGuardCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeGuardCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeGuardCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleGuardCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleGuardCount = { "GrappleGuardCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, GrappleGuardCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleGuardCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleGuardCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DiveCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DiveCount = { "DiveCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, DiveCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DiveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DiveCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpringboardCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpringboardCount = { "SpringboardCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, SpringboardCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpringboardCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpringboardCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinBreakCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinBreakCount = { "PinBreakCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, PinBreakCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinBreakCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinBreakCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForIdle = { "ReversalForIdle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, ReversalForIdle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForIdle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForIdle = { "SpecialMoveReversalForIdle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, SpecialMoveReversalForIdle), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForNoOperate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForNoOperate = { "ReversalForNoOperate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, ReversalForNoOperate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForNoOperate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForNoOperate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForNoOperate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerPlayData_Action" },
		{ "ModuleRelativePath", "Public/WrestlerPlayData_Action.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForNoOperate = { "SpecialMoveReversalForNoOperate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerPlayData_Action, SpecialMoveReversalForNoOperate), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForNoOperate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForNoOperate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungStrikeCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StroungGrappleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_IrishWhipCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_FinisherCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_TauntCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DashCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StepCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_StrikeGuardCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_GrappleGuardCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_DiveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpringboardCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_PinBreakCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_ReversalForNoOperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::NewProp_SpecialMoveReversalForNoOperate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"WrestlerPlayData_Action",
		sizeof(FWrestlerPlayData_Action),
		alignof(FWrestlerPlayData_Action),
		Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrestlerPlayData_Action()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrestlerPlayData_Action"), sizeof(FWrestlerPlayData_Action), Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrestlerPlayData_Action_Hash() { return 1853874880U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
