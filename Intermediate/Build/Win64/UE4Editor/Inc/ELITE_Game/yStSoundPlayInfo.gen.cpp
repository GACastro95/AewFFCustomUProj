// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/yStSoundPlayInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyStSoundPlayInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FyStSoundPlayInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FyStSoundPlayInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FyStSoundPlayInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FyStSoundPlayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FyStSoundPlayInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FyStSoundPlayInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("yStSoundPlayInfo"), sizeof(FyStSoundPlayInfo), Get_Z_Construct_UScriptStruct_FyStSoundPlayInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FyStSoundPlayInfo>()
{
	return FyStSoundPlayInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FyStSoundPlayInfo(FyStSoundPlayInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("yStSoundPlayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFyStSoundPlayInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFyStSoundPlayInfo()
	{
		UScriptStruct::DeferCppStructOps<FyStSoundPlayInfo>(FName(TEXT("yStSoundPlayInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFyStSoundPlayInfo;
	struct Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAtom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InAtom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BgmNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BgmNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnable_MetaData[];
#endif
		static void NewProp_IsEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Restart_MetaData[];
#endif
		static void NewProp_Restart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Restart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JukeBox_MetaData[];
#endif
		static void NewProp_JukeBox_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JukeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Entrance_MetaData[];
#endif
		static void NewProp_Entrance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Entrance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGame_MetaData[];
#endif
		static void NewProp_InGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/yStSoundPlayInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FyStSoundPlayInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InAtom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundPlayInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/yStSoundPlayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InAtom = { "InAtom", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStSoundPlayInfo, InAtom), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InAtom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InAtom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_BgmNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundPlayInfo" },
		{ "ModuleRelativePath", "Public/yStSoundPlayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_BgmNo = { "BgmNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStSoundPlayInfo, BgmNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_BgmNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_BgmNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_IsEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundPlayInfo" },
		{ "ModuleRelativePath", "Public/yStSoundPlayInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_IsEnable_SetBit(void* Obj)
	{
		((FyStSoundPlayInfo*)Obj)->IsEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_IsEnable = { "IsEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FyStSoundPlayInfo), &Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_IsEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_IsEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_IsEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Restart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundPlayInfo" },
		{ "ModuleRelativePath", "Public/yStSoundPlayInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Restart_SetBit(void* Obj)
	{
		((FyStSoundPlayInfo*)Obj)->Restart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Restart = { "Restart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FyStSoundPlayInfo), &Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Restart_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Restart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Restart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_JukeBox_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundPlayInfo" },
		{ "ModuleRelativePath", "Public/yStSoundPlayInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_JukeBox_SetBit(void* Obj)
	{
		((FyStSoundPlayInfo*)Obj)->JukeBox = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_JukeBox = { "JukeBox", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FyStSoundPlayInfo), &Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_JukeBox_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_JukeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_JukeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Entrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundPlayInfo" },
		{ "ModuleRelativePath", "Public/yStSoundPlayInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Entrance_SetBit(void* Obj)
	{
		((FyStSoundPlayInfo*)Obj)->Entrance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Entrance = { "Entrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FyStSoundPlayInfo), &Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Entrance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Entrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Entrance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStSoundPlayInfo" },
		{ "ModuleRelativePath", "Public/yStSoundPlayInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InGame_SetBit(void* Obj)
	{
		((FyStSoundPlayInfo*)Obj)->InGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InGame = { "InGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FyStSoundPlayInfo), &Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InAtom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_BgmNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_IsEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Restart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_JukeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_Entrance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::NewProp_InGame,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"yStSoundPlayInfo",
		sizeof(FyStSoundPlayInfo),
		alignof(FyStSoundPlayInfo),
		Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FyStSoundPlayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FyStSoundPlayInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("yStSoundPlayInfo"), sizeof(FyStSoundPlayInfo), Get_Z_Construct_UScriptStruct_FyStSoundPlayInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FyStSoundPlayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FyStSoundPlayInfo_Hash() { return 3428335886U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
