// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSHeatLevelUpChangedMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSHeatLevelUpChangedMove() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSMoveCommand();
// End Cross Module References
class UScriptStruct* FSSHeatLevelUpChangedMove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSHeatLevelUpChangedMove"), sizeof(FSSHeatLevelUpChangedMove), Get_Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSHeatLevelUpChangedMove>()
{
	return FSSHeatLevelUpChangedMove::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSHeatLevelUpChangedMove(FSSHeatLevelUpChangedMove::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSHeatLevelUpChangedMove"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelUpChangedMove
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelUpChangedMove()
	{
		UScriptStruct::DeferCppStructOps<FSSHeatLevelUpChangedMove>(FName(TEXT("SSHeatLevelUpChangedMove")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSHeatLevelUpChangedMove;
	struct Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MoveCommand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MoveCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSHeatLevelUpChangedMove.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSHeatLevelUpChangedMove>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveCommand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveCommand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelUpChangedMove" },
		{ "ModuleRelativePath", "Public/SSHeatLevelUpChangedMove.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveCommand = { "MoveCommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelUpChangedMove, MoveCommand), Z_Construct_UEnum_ABP_200508_ESSMoveCommand, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSHeatLevelUpChangedMove" },
		{ "ModuleRelativePath", "Public/SSHeatLevelUpChangedMove.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSHeatLevelUpChangedMove, MoveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveCommand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::NewProp_MoveId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSHeatLevelUpChangedMove",
		sizeof(FSSHeatLevelUpChangedMove),
		alignof(FSSHeatLevelUpChangedMove),
		Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSHeatLevelUpChangedMove"), sizeof(FSSHeatLevelUpChangedMove), Get_Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSHeatLevelUpChangedMove_Hash() { return 1110290067U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
