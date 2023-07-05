// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImGui/Public/ImGuiDPIScaleInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImGuiDPIScaleInfo() {}
// Cross Module References
	IMGUI_API UScriptStruct* Z_Construct_UScriptStruct_FImGuiDPIScaleInfo();
	UPackage* Z_Construct_UPackage__Script_ImGui();
	IMGUI_API UEnum* Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
class UScriptStruct* FImGuiDPIScaleInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern IMGUI_API uint32 Get_Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo, Z_Construct_UPackage__Script_ImGui(), TEXT("ImGuiDPIScaleInfo"), sizeof(FImGuiDPIScaleInfo), Get_Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Hash());
	}
	return Singleton;
}
template<> IMGUI_API UScriptStruct* StaticStruct<FImGuiDPIScaleInfo>()
{
	return FImGuiDPIScaleInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImGuiDPIScaleInfo(FImGuiDPIScaleInfo::StaticStruct, TEXT("/Script/ImGui"), TEXT("ImGuiDPIScaleInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ImGui_StaticRegisterNativesFImGuiDPIScaleInfo
{
	FScriptStruct_ImGui_StaticRegisterNativesFImGuiDPIScaleInfo()
	{
		UScriptStruct::DeferCppStructOps<FImGuiDPIScaleInfo>(FName(TEXT("ImGuiDPIScaleInfo")));
	}
} ScriptStruct_ImGui_StaticRegisterNativesFImGuiDPIScaleInfo;
	struct Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScalingMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalingMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScalingMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DPICurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DPICurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleWithCurve_MetaData[];
#endif
		static void NewProp_bScaleWithCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleWithCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImGuiDPIScaleInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiDPIScaleInfo" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod = { "ScalingMethod", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiDPIScaleInfo, ScalingMethod), Z_Construct_UEnum_ImGui_EImGuiDPIScaleMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiDPIScaleInfo" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiDPIScaleInfo, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiDPIScaleInfo" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve = { "DPICurve", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImGuiDPIScaleInfo, DPICurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ImGuiDPIScaleInfo" },
		{ "ModuleRelativePath", "Public/ImGuiDPIScaleInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_SetBit(void* Obj)
	{
		((FImGuiDPIScaleInfo*)Obj)->bScaleWithCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve = { "bScaleWithCurve", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImGuiDPIScaleInfo), &Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_ScalingMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_DPICurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::NewProp_bScaleWithCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImGui,
		nullptr,
		&NewStructOps,
		"ImGuiDPIScaleInfo",
		sizeof(FImGuiDPIScaleInfo),
		alignof(FImGuiDPIScaleInfo),
		Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImGuiDPIScaleInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ImGui();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImGuiDPIScaleInfo"), sizeof(FImGuiDPIScaleInfo), Get_Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImGuiDPIScaleInfo_Hash() { return 3460225082U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
