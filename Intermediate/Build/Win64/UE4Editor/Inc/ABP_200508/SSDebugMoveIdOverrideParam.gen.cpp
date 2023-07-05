// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDebugMoveIdOverrideParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDebugMoveIdOverrideParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSSDebugMoveIdOverrideParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSDebugMoveIdOverrideParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSDebugMoveIdOverrideParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDebugMoveIdOverrideParam"), sizeof(FSSDebugMoveIdOverrideParam), Get_Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDebugMoveIdOverrideParam>()
{
	return FSSDebugMoveIdOverrideParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDebugMoveIdOverrideParam(FSSDebugMoveIdOverrideParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDebugMoveIdOverrideParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugMoveIdOverrideParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugMoveIdOverrideParam()
	{
		UScriptStruct::DeferCppStructOps<FSSDebugMoveIdOverrideParam>(FName(TEXT("SSDebugMoveIdOverrideParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDebugMoveIdOverrideParam;
	struct Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Punch1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Punch2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Punch2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kick1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kick2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kick2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throw1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Throw1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throw2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Throw2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashPunch1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashPunch1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashPunch2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashPunch2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashKick1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashKick1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashKick2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashKick2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashThrow1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashThrow1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashThrow2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DashThrow2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPunch1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirPunch1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirPunch2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirPunch2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirKick1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirKick1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirKick2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirKick2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirThrow1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirThrow1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirThrow2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AirThrow2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon1_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Weapon1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon2_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Weapon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpecial_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponSpecial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Finisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDebugMoveIdOverrideParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FSSDebugMoveIdOverrideParam*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSDebugMoveIdOverrideParam), &Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch1 = { "Punch1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Punch1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch2 = { "Punch2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Punch2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick1 = { "Kick1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Kick1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick2 = { "Kick2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Kick2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw1 = { "Throw1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Throw1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw2 = { "Throw2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Throw2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch1 = { "DashPunch1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, DashPunch1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch2 = { "DashPunch2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, DashPunch2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick1 = { "DashKick1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, DashKick1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick2 = { "DashKick2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, DashKick2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow1 = { "DashThrow1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, DashThrow1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow2 = { "DashThrow2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, DashThrow2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch1 = { "AirPunch1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, AirPunch1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch2 = { "AirPunch2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, AirPunch2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick1 = { "AirKick1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, AirKick1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick2 = { "AirKick2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, AirKick2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow1 = { "AirThrow1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, AirThrow1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow2 = { "AirThrow2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, AirThrow2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon1 = { "Weapon1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Weapon1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon2 = { "Weapon2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Weapon2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_WeaponSpecial_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_WeaponSpecial = { "WeaponSpecial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, WeaponSpecial), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_WeaponSpecial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_WeaponSpecial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Finisher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDebugMoveIdOverrideParam" },
		{ "ModuleRelativePath", "Public/SSDebugMoveIdOverrideParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDebugMoveIdOverrideParam, Finisher), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Finisher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Punch2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Kick2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Throw2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashPunch2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashKick2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_DashThrow2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirPunch2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirKick2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_AirThrow2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Weapon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_WeaponSpecial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::NewProp_Finisher,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSDebugMoveIdOverrideParam",
		sizeof(FSSDebugMoveIdOverrideParam),
		alignof(FSSDebugMoveIdOverrideParam),
		Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDebugMoveIdOverrideParam"), sizeof(FSSDebugMoveIdOverrideParam), Get_Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDebugMoveIdOverrideParam_Hash() { return 1555517057U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
