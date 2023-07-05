// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DebugCareer_MainMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCareer_MainMenu() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCareer_MainMenu();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FDebugCareer_MainMenu::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCareer_MainMenu, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DebugCareer_MainMenu"), sizeof(FDebugCareer_MainMenu), Get_Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDebugCareer_MainMenu>()
{
	return FDebugCareer_MainMenu::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCareer_MainMenu(FDebugCareer_MainMenu::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DebugCareer_MainMenu"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareer_MainMenu
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareer_MainMenu()
	{
		UScriptStruct::DeferCppStructOps<FDebugCareer_MainMenu>(FName(TEXT("DebugCareer_MainMenu")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareer_MainMenu;
	struct Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugCareer_MainMenu.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCareer_MainMenu>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DebugCareer_MainMenu",
		sizeof(FDebugCareer_MainMenu),
		alignof(FDebugCareer_MainMenu),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCareer_MainMenu()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCareer_MainMenu"), sizeof(FDebugCareer_MainMenu), Get_Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCareer_MainMenu_Hash() { return 1783959213U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
