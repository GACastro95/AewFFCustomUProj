// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerMeshParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerMeshParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerMeshParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerMeshParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerMeshParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerMeshParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerMeshParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerMeshParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerMeshParam"), sizeof(FELWrestlerMeshParam), Get_Z_Construct_UScriptStruct_FELWrestlerMeshParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerMeshParam>()
{
	return FELWrestlerMeshParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerMeshParam(FELWrestlerMeshParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerMeshParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerMeshParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerMeshParam()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerMeshParam>(FName(TEXT("ELWrestlerMeshParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerMeshParam;
	struct Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Default_NonIndicative_Material_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Default_NonIndicative_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Default_NonIndicative_Material;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShowMaterialsInEntranceScene_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMaterialsInEntranceScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowMaterialsInEntranceScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerMeshParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerMeshParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerMeshParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerMeshParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerMeshParam, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_Default_NonIndicative_Material_Inner = { "Default_NonIndicative_Material", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_Default_NonIndicative_Material_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerMeshParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerMeshParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_Default_NonIndicative_Material = { "Default_NonIndicative_Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerMeshParam, Default_NonIndicative_Material), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_Default_NonIndicative_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_Default_NonIndicative_Material_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_ShowMaterialsInEntranceScene_Inner = { "ShowMaterialsInEntranceScene", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_ShowMaterialsInEntranceScene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerMeshParam" },
		{ "ModuleRelativePath", "Public/ELWrestlerMeshParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_ShowMaterialsInEntranceScene = { "ShowMaterialsInEntranceScene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerMeshParam, ShowMaterialsInEntranceScene), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_ShowMaterialsInEntranceScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_ShowMaterialsInEntranceScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_Default_NonIndicative_Material_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_Default_NonIndicative_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_ShowMaterialsInEntranceScene_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::NewProp_ShowMaterialsInEntranceScene,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerMeshParam",
		sizeof(FELWrestlerMeshParam),
		alignof(FELWrestlerMeshParam),
		Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerMeshParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerMeshParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerMeshParam"), sizeof(FELWrestlerMeshParam), Get_Z_Construct_UScriptStruct_FELWrestlerMeshParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerMeshParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerMeshParam_Hash() { return 2840713795U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
