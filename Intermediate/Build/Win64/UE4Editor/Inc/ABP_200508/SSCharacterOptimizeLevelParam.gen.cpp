// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCharacterOptimizeLevelParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCharacterOptimizeLevelParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSCharacterOptimizeLevelParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCharacterOptimizeLevelParam"), sizeof(FSSCharacterOptimizeLevelParam), Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCharacterOptimizeLevelParam>()
{
	return FSSCharacterOptimizeLevelParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCharacterOptimizeLevelParam(FSSCharacterOptimizeLevelParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCharacterOptimizeLevelParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterOptimizeLevelParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterOptimizeLevelParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCharacterOptimizeLevelParam>(FName(TEXT("SSCharacterOptimizeLevelParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterOptimizeLevelParam;
	struct Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSubAnim_MetaData[];
#endif
		static void NewProp_DisableSubAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSubAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableFacialAnim_MetaData[];
#endif
		static void NewProp_DisableFacialAnim_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableFacialAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableClothingSimulation_MetaData[];
#endif
		static void NewProp_DisableClothingSimulation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableClothingSimulation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableMorph_MetaData[];
#endif
		static void NewProp_DisableMorph_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableMorph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableCastShadowInsignificateMesh_MetaData[];
#endif
		static void NewProp_DisableCastShadowInsignificateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableCastShadowInsignificateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableInsignificateMesh_MetaData[];
#endif
		static void NewProp_DisableInsignificateMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableInsignificateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickIntervalFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TickIntervalFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickIntervalFrameWhenNotRendered_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TickIntervalFrameWhenNotRendered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTickIntervalMode_MetaData[];
#endif
		static void NewProp_ActorTickIntervalMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActorTickIntervalMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableLocalAttack_MetaData[];
#endif
		static void NewProp_DisableLocalAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableLocalAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableMoveSmoothing_MetaData[];
#endif
		static void NewProp_DisableMoveSmoothing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableMoveSmoothing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableProxyCollision_MetaData[];
#endif
		static void NewProp_DisableProxyCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableProxyCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableMoveCollision_MetaData[];
#endif
		static void NewProp_DisableMoveCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableMoveCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSimulateMove_MetaData[];
#endif
		static void NewProp_DisableSimulateMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSimulateMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisablePhysicsCollision_MetaData[];
#endif
		static void NewProp_DisablePhysicsCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisablePhysicsCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSyncMotionCollision_MetaData[];
#endif
		static void NewProp_DisableSyncMotionCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSyncMotionCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSyncMotionFloorTrace_MetaData[];
#endif
		static void NewProp_DisableSyncMotionFloorTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSyncMotionFloorTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSound_MetaData[];
#endif
		static void NewProp_DisableSound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableSlipTrace_MetaData[];
#endif
		static void NewProp_DisableSlipTrace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableSlipTrace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MergedMesh_MetaData[];
#endif
		static void NewProp_MergedMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MergedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleShadow_MetaData[];
#endif
		static void NewProp_SimpleShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SimpleShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableShadow_MetaData[];
#endif
		static void NewProp_DisableShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableIndirectShadow_MetaData[];
#endif
		static void NewProp_DisableIndirectShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableIndirectShadow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCharacterOptimizeLevelParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_Enable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_RequiredDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_RequiredDistance = { "RequiredDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeLevelParam, RequiredDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_RequiredDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_RequiredDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSubAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSubAnim_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableSubAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSubAnim = { "DisableSubAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSubAnim_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSubAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSubAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableFacialAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableFacialAnim_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableFacialAnim = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableFacialAnim = { "DisableFacialAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableFacialAnim_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableFacialAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableFacialAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableClothingSimulation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableClothingSimulation_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableClothingSimulation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableClothingSimulation = { "DisableClothingSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableClothingSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableClothingSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableClothingSimulation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMorph_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMorph_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableMorph = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMorph = { "DisableMorph", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMorph_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMorph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMorph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableCastShadowInsignificateMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableCastShadowInsignificateMesh_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableCastShadowInsignificateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableCastShadowInsignificateMesh = { "DisableCastShadowInsignificateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableCastShadowInsignificateMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableCastShadowInsignificateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableCastShadowInsignificateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableInsignificateMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableInsignificateMesh_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableInsignificateMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableInsignificateMesh = { "DisableInsignificateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableInsignificateMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableInsignificateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableInsignificateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MinLOD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MinLOD = { "MinLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeLevelParam, MinLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MinLOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrame = { "TickIntervalFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeLevelParam, TickIntervalFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrameWhenNotRendered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrameWhenNotRendered = { "TickIntervalFrameWhenNotRendered", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeLevelParam, TickIntervalFrameWhenNotRendered), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrameWhenNotRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrameWhenNotRendered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_ActorTickIntervalMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_ActorTickIntervalMode_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->ActorTickIntervalMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_ActorTickIntervalMode = { "ActorTickIntervalMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_ActorTickIntervalMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_ActorTickIntervalMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_ActorTickIntervalMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableLocalAttack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableLocalAttack_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableLocalAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableLocalAttack = { "DisableLocalAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableLocalAttack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableLocalAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableLocalAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveSmoothing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveSmoothing_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableMoveSmoothing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveSmoothing = { "DisableMoveSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveSmoothing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableProxyCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableProxyCollision_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableProxyCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableProxyCollision = { "DisableProxyCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableProxyCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableProxyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableProxyCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveCollision_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableMoveCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveCollision = { "DisableMoveCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSimulateMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSimulateMove_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableSimulateMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSimulateMove = { "DisableSimulateMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSimulateMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSimulateMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSimulateMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisablePhysicsCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisablePhysicsCollision_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisablePhysicsCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisablePhysicsCollision = { "DisablePhysicsCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisablePhysicsCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisablePhysicsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisablePhysicsCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionCollision_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionCollision_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableSyncMotionCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionCollision = { "DisableSyncMotionCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionFloorTrace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionFloorTrace_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableSyncMotionFloorTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionFloorTrace = { "DisableSyncMotionFloorTrace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionFloorTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionFloorTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionFloorTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSound_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableSound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSound = { "DisableSound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSlipTrace_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSlipTrace_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableSlipTrace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSlipTrace = { "DisableSlipTrace", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSlipTrace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSlipTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSlipTrace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MergedMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MergedMesh_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->MergedMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MergedMesh = { "MergedMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MergedMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MergedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MergedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_SimpleShadow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_SimpleShadow_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->SimpleShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_SimpleShadow = { "SimpleShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_SimpleShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_SimpleShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_SimpleShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableShadow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableShadow_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableShadow = { "DisableShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableIndirectShadow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeLevelParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeLevelParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableIndirectShadow_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeLevelParam*)Obj)->DisableIndirectShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableIndirectShadow = { "DisableIndirectShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeLevelParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableIndirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableIndirectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableIndirectShadow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_Enable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_RequiredDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSubAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableFacialAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableClothingSimulation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMorph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableCastShadowInsignificateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableInsignificateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MinLOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_TickIntervalFrameWhenNotRendered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_ActorTickIntervalMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableLocalAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveSmoothing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableProxyCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableMoveCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSimulateMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisablePhysicsCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSyncMotionFloorTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableSlipTrace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_MergedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_SimpleShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::NewProp_DisableIndirectShadow,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSCharacterOptimizeLevelParam",
		sizeof(FSSCharacterOptimizeLevelParam),
		alignof(FSSCharacterOptimizeLevelParam),
		Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCharacterOptimizeLevelParam"), sizeof(FSSCharacterOptimizeLevelParam), Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeLevelParam_Hash() { return 1012242927U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
