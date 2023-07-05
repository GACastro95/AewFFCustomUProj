// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StAOnColPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStAOnColPoint() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStAOnColPoint();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStAOnColPoint>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStAOnColPoint cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStAOnColPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStAOnColPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStAOnColPoint, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StAOnColPoint"), sizeof(FStAOnColPoint), Get_Z_Construct_UScriptStruct_FStAOnColPoint_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStAOnColPoint>()
{
	return FStAOnColPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStAOnColPoint(FStAOnColPoint::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StAOnColPoint"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStAOnColPoint
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStAOnColPoint()
	{
		UScriptStruct::DeferCppStructOps<FStAOnColPoint>(FName(TEXT("StAOnColPoint")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStAOnColPoint;
	struct Z_Construct_UScriptStruct_FStAOnColPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static void NewProp_Head_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_R_MetaData[];
#endif
		static void NewProp_Hand_R_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hand_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_L_MetaData[];
#endif
		static void NewProp_Hand_L_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hand_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static void NewProp_Body_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leg_R_MetaData[];
#endif
		static void NewProp_Leg_R_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Leg_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leg_L_MetaData[];
#endif
		static void NewProp_Leg_L_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Leg_L;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Knee_R_MetaData[];
#endif
		static void NewProp_Knee_R_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Knee_R;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Knee_L_MetaData[];
#endif
		static void NewProp_Knee_L_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Knee_L;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStAOnColPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Head_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnColPoint" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Head_SetBit(void* Obj)
	{
		((FStAOnColPoint*)Obj)->Head = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnColPoint), &Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Head_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnColPoint" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_R_SetBit(void* Obj)
	{
		((FStAOnColPoint*)Obj)->Hand_R = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_R = { "Hand_R", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnColPoint), &Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnColPoint" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_L_SetBit(void* Obj)
	{
		((FStAOnColPoint*)Obj)->Hand_L = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_L = { "Hand_L", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnColPoint), &Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_L_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnColPoint" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Body_SetBit(void* Obj)
	{
		((FStAOnColPoint*)Obj)->Body = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnColPoint), &Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Body_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Body_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnColPoint" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_R_SetBit(void* Obj)
	{
		((FStAOnColPoint*)Obj)->Leg_R = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_R = { "Leg_R", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnColPoint), &Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnColPoint" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_L_SetBit(void* Obj)
	{
		((FStAOnColPoint*)Obj)->Leg_L = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_L = { "Leg_L", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnColPoint), &Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_L_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_L_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_R_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnColPoint" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_R_SetBit(void* Obj)
	{
		((FStAOnColPoint*)Obj)->Knee_R = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_R = { "Knee_R", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnColPoint), &Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_R_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_L_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StAOnColPoint" },
		{ "ModuleRelativePath", "Public/StAOnColPoint.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_L_SetBit(void* Obj)
	{
		((FStAOnColPoint*)Obj)->Knee_L = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_L = { "Knee_L", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStAOnColPoint), &Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_L_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_L_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStAOnColPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Head,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Hand_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Body,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Leg_L,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_R,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStAOnColPoint_Statics::NewProp_Knee_L,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStAOnColPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StAOnColPoint",
		sizeof(FStAOnColPoint),
		alignof(FStAOnColPoint),
		Z_Construct_UScriptStruct_FStAOnColPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStAOnColPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStAOnColPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStAOnColPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StAOnColPoint"), sizeof(FStAOnColPoint), Get_Z_Construct_UScriptStruct_FStAOnColPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStAOnColPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStAOnColPoint_Hash() { return 804037880U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
