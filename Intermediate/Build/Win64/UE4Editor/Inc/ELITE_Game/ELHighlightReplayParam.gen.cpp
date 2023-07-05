// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELHighlightReplayParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELHighlightReplayParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELHighlightReplayParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESpecialMovesType();
// End Cross Module References
class UScriptStruct* FELHighlightReplayParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELHighlightReplayParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELHighlightReplayParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELHighlightReplayParam"), sizeof(FELHighlightReplayParam), Get_Z_Construct_UScriptStruct_FELHighlightReplayParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELHighlightReplayParam>()
{
	return FELHighlightReplayParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELHighlightReplayParam(FELHighlightReplayParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELHighlightReplayParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELHighlightReplayParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELHighlightReplayParam()
	{
		UScriptStruct::DeferCppStructOps<FELHighlightReplayParam>(FName(TEXT("ELHighlightReplayParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELHighlightReplayParam;
	struct Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaySec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplaySec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmLengthOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArmLengthOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringArmPitch;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpecialMovesType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialMovesType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpecialMovesType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELHighlightReplayParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHighlightReplayParam" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FELHighlightReplayParam*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELHighlightReplayParam), &Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ReplaySec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHighlightReplayParam" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ReplaySec = { "ReplaySec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELHighlightReplayParam, ReplaySec), METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ReplaySec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ReplaySec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHighlightReplayParam" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELHighlightReplayParam, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHighlightReplayParam" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELHighlightReplayParam, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ArmLengthOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHighlightReplayParam" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ArmLengthOffset = { "ArmLengthOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELHighlightReplayParam, ArmLengthOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ArmLengthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ArmLengthOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_CameraLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHighlightReplayParam" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELHighlightReplayParam, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_CameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_CameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpringArmPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHighlightReplayParam" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpringArmPitch = { "SpringArmPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELHighlightReplayParam, SpringArmPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpringArmPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpringArmPitch_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpecialMovesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpecialMovesType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELHighlightReplayParam" },
		{ "ModuleRelativePath", "Public/ELHighlightReplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpecialMovesType = { "SpecialMovesType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELHighlightReplayParam, SpecialMovesType), Z_Construct_UEnum_ELITE_Game_ESpecialMovesType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpecialMovesType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpecialMovesType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ReplaySec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_ArmLengthOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_CameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpringArmPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpecialMovesType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::NewProp_SpecialMovesType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELHighlightReplayParam",
		sizeof(FELHighlightReplayParam),
		alignof(FELHighlightReplayParam),
		Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELHighlightReplayParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELHighlightReplayParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELHighlightReplayParam"), sizeof(FELHighlightReplayParam), Get_Z_Construct_UScriptStruct_FELHighlightReplayParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELHighlightReplayParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELHighlightReplayParam_Hash() { return 1014932259U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
