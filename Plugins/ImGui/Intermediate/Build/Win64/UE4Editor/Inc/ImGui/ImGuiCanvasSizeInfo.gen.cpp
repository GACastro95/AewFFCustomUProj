// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiCanvasSizeInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiCanvasSizeInfo() {}
// Cross Module References
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo();
	UPackage* Z_Construct_UPackage__Script_ImGui();
	IMGUI_API UEnum* Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType();
// End Cross Module References
class UScriptStruct* FImGuiCanvasSizeInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IMGUI_API uint32 Get_Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo, Z_Construct_UPackage__Script_ImGui(), TEXT("ImGuiCanvasSizeInfo"), sizeof(FImGuiCanvasSizeInfo), Get_Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Hash());
	}
	return Singleton;
}
template<> IMGUI_API UScriptStruct* StaticStruct<FImGuiCanvasSizeInfo>()
{
	return FImGuiCanvasSizeInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImGuiCanvasSizeInfo(FImGuiCanvasSizeInfo::StaticStruct, TEXT("/Script/ImGui"), TEXT("ImGuiCanvasSizeInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ImGui_StaticRegisterNativesFImGuiCanvasSizeInfo
{
	FScriptStruct_ImGui_StaticRegisterNativesFImGuiCanvasSizeInfo()
	{
		UScriptStruct::DeferCppStructOps<FImGuiCanvasSizeInfo>(FName(TEXT("ImGuiCanvasSizeInfo")));
	}
} ScriptStruct_ImGui_StaticRegisterNativesFImGuiCanvasSizeInfo;
	struct Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SizeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SizeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExtendToViewport_MetaData[];
#endif
		static void NewProp_bExtendToViewport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExtendToViewport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImGuiCanvasSizeInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiCanvasSizeInfo" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType = { "SizeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiCanvasSizeInfo, SizeType), Z_Construct_UEnum_ImGui_EImGuiCanvasSizeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiCanvasSizeInfo" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiCanvasSizeInfo, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiCanvasSizeInfo" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiCanvasSizeInfo, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiCanvasSizeInfo" },
		{ "ModuleRelativePath", "Public/ImGuiCanvasSizeInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_SetBit(void* Obj)
	{
		((FImGuiCanvasSizeInfo*)Obj)->bExtendToViewport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport = { "bExtendToViewport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImGuiCanvasSizeInfo), &Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_SizeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::NewProp_bExtendToViewport,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
		nullptr,
		&NewStructOps,
		"ImGuiCanvasSizeInfo",
		sizeof(FImGuiCanvasSizeInfo),
		alignof(FImGuiCanvasSizeInfo),
		Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ImGui();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImGuiCanvasSizeInfo"), sizeof(FImGuiCanvasSizeInfo), Get_Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImGuiCanvasSizeInfo_Hash() { return 4133169260U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
