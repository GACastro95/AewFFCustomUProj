// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerUseTurnCursor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerUseTurnCursor() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerUseTurnCursor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHUBMenuUseTurn();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventMark();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FCareerUseTurnCursor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerUseTurnCursor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerUseTurnCursor, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerUseTurnCursor"), sizeof(FCareerUseTurnCursor), Get_Z_Construct_UScriptStruct_FCareerUseTurnCursor_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerUseTurnCursor>()
{
	return FCareerUseTurnCursor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerUseTurnCursor(FCareerUseTurnCursor::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerUseTurnCursor"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerUseTurnCursor
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerUseTurnCursor()
	{
		UScriptStruct::DeferCppStructOps<FCareerUseTurnCursor>(FName(TEXT("CareerUseTurnCursor")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerUseTurnCursor;
	struct Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Identify_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identify_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Identify;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventMark_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventMark_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventMark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrayOut_MetaData[];
#endif
		static void NewProp_GrayOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GrayOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecisionCommandOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DecisionCommandOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PanelBGTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PanelBGTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerUseTurnCursor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerUseTurnCursor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Widget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnCursor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CareerUseTurnCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnCursor, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Identify_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Identify_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Identify = { "Identify", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnCursor, Identify), Z_Construct_UEnum_ABP_200508_ECareerHUBMenuUseTurn, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Identify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Identify_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_EventMark_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_EventMark_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_EventMark = { "EventMark", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnCursor, EventMark), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventMark, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_EventMark_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_EventMark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_GrayOut_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnCursor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_GrayOut_SetBit(void* Obj)
	{
		((FCareerUseTurnCursor*)Obj)->GrayOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_GrayOut = { "GrayOut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerUseTurnCursor), &Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_GrayOut_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_GrayOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_GrayOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_DecisionCommandOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_DecisionCommandOffset = { "DecisionCommandOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnCursor, DecisionCommandOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_DecisionCommandOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_DecisionCommandOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_PanelBGTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerUseTurnCursor" },
		{ "ModuleRelativePath", "Public/CareerUseTurnCursor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_PanelBGTexture = { "PanelBGTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerUseTurnCursor, PanelBGTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_PanelBGTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_PanelBGTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Identify_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_Identify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_EventMark_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_EventMark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_GrayOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_DecisionCommandOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::NewProp_PanelBGTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerUseTurnCursor",
		sizeof(FCareerUseTurnCursor),
		alignof(FCareerUseTurnCursor),
		Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerUseTurnCursor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerUseTurnCursor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerUseTurnCursor"), sizeof(FCareerUseTurnCursor), Get_Z_Construct_UScriptStruct_FCareerUseTurnCursor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerUseTurnCursor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerUseTurnCursor_Hash() { return 484592726U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
