// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELAttachCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAttachCondition() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELAttachCondition();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FELAttachCondition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELAttachCondition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELAttachCondition, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELAttachCondition"), sizeof(FELAttachCondition), Get_Z_Construct_UScriptStruct_FELAttachCondition_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELAttachCondition>()
{
	return FELAttachCondition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELAttachCondition(FELAttachCondition::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELAttachCondition"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELAttachCondition
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELAttachCondition()
	{
		UScriptStruct::DeferCppStructOps<FELAttachCondition>(FName(TEXT("ELAttachCondition")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELAttachCondition;
	struct Z_Construct_UScriptStruct_FELAttachCondition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AxisCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAttachCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELAttachCondition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELAttachCondition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AxisCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAttachCondition" },
		{ "ModuleRelativePath", "Public/ELAttachCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AxisCondition = { "AxisCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAttachCondition, AxisCondition), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AxisCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AxisCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_ParentBoneName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAttachCondition" },
		{ "ModuleRelativePath", "Public/ELAttachCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAttachCondition, ParentBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_ParentBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_ParentBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_SocketOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAttachCondition" },
		{ "ModuleRelativePath", "Public/ELAttachCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAttachCondition, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_SocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_SocketOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AttachOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAttachCondition" },
		{ "ModuleRelativePath", "Public/ELAttachCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AttachOffset = { "AttachOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAttachCondition, AttachOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AttachOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AttachOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELAttachCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AxisCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_ParentBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_SocketOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAttachCondition_Statics::NewProp_AttachOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELAttachCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELAttachCondition",
		sizeof(FELAttachCondition),
		alignof(FELAttachCondition),
		Z_Construct_UScriptStruct_FELAttachCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELAttachCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELAttachCondition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELAttachCondition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELAttachCondition"), sizeof(FELAttachCondition), Get_Z_Construct_UScriptStruct_FELAttachCondition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELAttachCondition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELAttachCondition_Hash() { return 1106705091U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
