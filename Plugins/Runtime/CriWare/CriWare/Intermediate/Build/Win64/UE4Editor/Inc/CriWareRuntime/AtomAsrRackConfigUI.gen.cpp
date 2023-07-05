// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAsrRackConfigUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAsrRackConfigUI() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType();
// End Cross Module References
class UScriptStruct* FAtomAsrRackConfigUI::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAsrRackConfigUI"), sizeof(FAtomAsrRackConfigUI), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAsrRackConfigUI>()
{
	return FAtomAsrRackConfigUI::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAsrRackConfigUI(FAtomAsrRackConfigUI::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAsrRackConfigUI"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI()
	{
		UScriptStruct::DeferCppStructOps<FAtomAsrRackConfigUI>(FName(TEXT("AtomAsrRackConfigUI")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAsrRackConfigUI;
	struct Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundRendererTypeUI_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundRendererTypeUI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ElementID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAsrRackConfigUI>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI = { "SoundRendererTypeUI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAsrRackConfigUI, SoundRendererTypeUI), Z_Construct_UEnum_CriWareRuntime_EAtomSoundRendererType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAsrRackConfigUI" },
		{ "ModuleRelativePath", "Public/AtomAsrRackConfigUI.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAsrRackConfigUI, ElementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_SoundRendererTypeUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::NewProp_ElementID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAsrRackConfigUI",
		sizeof(FAtomAsrRackConfigUI),
		alignof(FAtomAsrRackConfigUI),
		Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAsrRackConfigUI()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAsrRackConfigUI"), sizeof(FAtomAsrRackConfigUI), Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAsrRackConfigUI_Hash() { return 1607434540U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
