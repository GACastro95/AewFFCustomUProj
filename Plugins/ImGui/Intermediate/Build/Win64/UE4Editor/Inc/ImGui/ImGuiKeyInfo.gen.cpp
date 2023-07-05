// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiKeyInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiKeyInfo() {}
// Cross Module References
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiKeyInfo();
	UPackage* Z_Construct_UPackage__Script_ImGui();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ECheckBoxState();
// End Cross Module References
class UScriptStruct* FImGuiKeyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IMGUI_API uint32 Get_Z_Construct_UScriptStruct_FImGuiKeyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImGuiKeyInfo, Z_Construct_UPackage__Script_ImGui(), TEXT("ImGuiKeyInfo"), sizeof(FImGuiKeyInfo), Get_Z_Construct_UScriptStruct_FImGuiKeyInfo_Hash());
	}
	return Singleton;
}
template<> IMGUI_API UScriptStruct* StaticStruct<FImGuiKeyInfo>()
{
	return FImGuiKeyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImGuiKeyInfo(FImGuiKeyInfo::StaticStruct, TEXT("/Script/ImGui"), TEXT("ImGuiKeyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ImGui_StaticRegisterNativesFImGuiKeyInfo
{
	FScriptStruct_ImGui_StaticRegisterNativesFImGuiKeyInfo()
	{
		UScriptStruct::DeferCppStructOps<FImGuiKeyInfo>(FName(TEXT("ImGuiKeyInfo")));
	}
} ScriptStruct_ImGui_StaticRegisterNativesFImGuiKeyInfo;
	struct Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Shift_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Shift;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ctrl_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ctrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Ctrl;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Alt_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Alt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cmd_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cmd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImGuiKeyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiKeyInfo, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiKeyInfo, Shift), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl = { "Ctrl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiKeyInfo, Ctrl), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiKeyInfo, Alt), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiKeyInfo" },
		{ "ModuleRelativePath", "Public/ImGuiKeyInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiKeyInfo, Cmd), Z_Construct_UEnum_SlateCore_ECheckBoxState, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Ctrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Alt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::NewProp_Cmd,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
		nullptr,
		&NewStructOps,
		"ImGuiKeyInfo",
		sizeof(FImGuiKeyInfo),
		alignof(FImGuiKeyInfo),
		Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImGuiKeyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImGuiKeyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ImGui();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImGuiKeyInfo"), sizeof(FImGuiKeyInfo), Get_Z_Construct_UScriptStruct_FImGuiKeyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImGuiKeyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImGuiKeyInfo_Hash() { return 845830887U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
