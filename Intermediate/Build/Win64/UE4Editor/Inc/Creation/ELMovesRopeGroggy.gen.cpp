// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesRopeGroggy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesRopeGroggy() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesRopeGroggy();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesRopeGroggy>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesRopeGroggy cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesRopeGroggy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesRopeGroggy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesRopeGroggy, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesRopeGroggy"), sizeof(FELMovesRopeGroggy), Get_Z_Construct_UScriptStruct_FELMovesRopeGroggy_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesRopeGroggy>()
{
	return FELMovesRopeGroggy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesRopeGroggy(FELMovesRopeGroggy::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesRopeGroggy"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesRopeGroggy
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesRopeGroggy()
	{
		UScriptStruct::DeferCppStructOps<FELMovesRopeGroggy>(FName(TEXT("ELMovesRopeGroggy")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesRopeGroggy;
	struct Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeGroggy_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeGroggy_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeGroggy_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeGroggy_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeGroggy_RunningPunch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeGroggy_RunningPunch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeGroggy_RunningKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeGroggy_RunningKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RopeGroggy_RunningGrapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RopeGroggy_RunningGrapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_InRing_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_InRing_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_InRing_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_InRing_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_InRing_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_InRing_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Running_InRing_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Running_InRing_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Running_InRing_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Running_InRing_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Running_InRing_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Running_InRing_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_OutSide_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_OutSide_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_OutSide_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_OutSide_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_OutSide_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_OutSide_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Apron_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Apron_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Apron_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Apron_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Apron_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Apron_Grapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Running_Apron_Punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Running_Apron_Punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Running_Apron_Kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Running_Apron_Kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiddleRopeGroggy_Running_Apron_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiddleRopeGroggy_Running_Apron_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesRopeGroggy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Punch = { "RopeGroggy_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, RopeGroggy_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Kick = { "RopeGroggy_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, RopeGroggy_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningPunch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningPunch = { "RopeGroggy_RunningPunch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, RopeGroggy_RunningPunch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningPunch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningPunch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningKick = { "RopeGroggy_RunningKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, RopeGroggy_RunningKick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningGrapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningGrapple = { "RopeGroggy_RunningGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, RopeGroggy_RunningGrapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningGrapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Punch = { "MiddleRopeGroggy_InRing_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_InRing_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Kick = { "MiddleRopeGroggy_InRing_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_InRing_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Grapple = { "MiddleRopeGroggy_InRing_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_InRing_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Punch = { "MiddleRopeGroggy_Running_InRing_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Running_InRing_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Kick = { "MiddleRopeGroggy_Running_InRing_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Running_InRing_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Grapple = { "MiddleRopeGroggy_Running_InRing_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Running_InRing_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Punch = { "MiddleRopeGroggy_OutSide_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_OutSide_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Kick = { "MiddleRopeGroggy_OutSide_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_OutSide_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Grapple = { "MiddleRopeGroggy_OutSide_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_OutSide_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Punch = { "MiddleRopeGroggy_Apron_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Apron_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Kick = { "MiddleRopeGroggy_Apron_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Apron_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Grapple = { "MiddleRopeGroggy_Apron_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Apron_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Grapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Punch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Punch = { "MiddleRopeGroggy_Running_Apron_Punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Running_Apron_Punch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Kick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Kick = { "MiddleRopeGroggy_Running_Apron_Kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Running_Apron_Kick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesRopeGroggy" },
		{ "ModuleRelativePath", "Public/ELMovesRopeGroggy.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Grapple = { "MiddleRopeGroggy_Running_Apron_Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesRopeGroggy, MiddleRopeGroggy_Running_Apron_Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningPunch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_RopeGroggy_RunningGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_InRing_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_InRing_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_OutSide_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Apron_Grapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::NewProp_MiddleRopeGroggy_Running_Apron_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesRopeGroggy",
		sizeof(FELMovesRopeGroggy),
		alignof(FELMovesRopeGroggy),
		Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesRopeGroggy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesRopeGroggy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesRopeGroggy"), sizeof(FELMovesRopeGroggy), Get_Z_Construct_UScriptStruct_FELMovesRopeGroggy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesRopeGroggy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesRopeGroggy_Hash() { return 1213338678U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
