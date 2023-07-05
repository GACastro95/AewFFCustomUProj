// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/RopeConstraintParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRopeConstraintParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FRopeConstraintParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FRopeConstraintParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FRopeConstraintParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRopeConstraintParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("RopeConstraintParam"), sizeof(FRopeConstraintParam), Get_Z_Construct_UScriptStruct_FRopeConstraintParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FRopeConstraintParam>()
{
	return FRopeConstraintParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRopeConstraintParam(FRopeConstraintParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("RopeConstraintParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFRopeConstraintParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFRopeConstraintParam()
	{
		UScriptStruct::DeferCppStructOps<FRopeConstraintParam>(FName(TEXT("RopeConstraintParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFRopeConstraintParam;
	struct Z_Construct_UScriptStruct_FRopeConstraintParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirX_MetaData[];
#endif
		static void NewProp_bDirX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RopeConstraintParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRopeConstraintParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_Actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RopeConstraintParam" },
		{ "ModuleRelativePath", "Public/RopeConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRopeConstraintParam, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RopeConstraintParam" },
		{ "ModuleRelativePath", "Public/RopeConstraintParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRopeConstraintParam, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_bDirX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RopeConstraintParam" },
		{ "ModuleRelativePath", "Public/RopeConstraintParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_bDirX_SetBit(void* Obj)
	{
		((FRopeConstraintParam*)Obj)->bDirX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_bDirX = { "bDirX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRopeConstraintParam), &Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_bDirX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_bDirX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_bDirX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::NewProp_bDirX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"RopeConstraintParam",
		sizeof(FRopeConstraintParam),
		alignof(FRopeConstraintParam),
		Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRopeConstraintParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRopeConstraintParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RopeConstraintParam"), sizeof(FRopeConstraintParam), Get_Z_Construct_UScriptStruct_FRopeConstraintParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRopeConstraintParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRopeConstraintParam_Hash() { return 2121676701U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
