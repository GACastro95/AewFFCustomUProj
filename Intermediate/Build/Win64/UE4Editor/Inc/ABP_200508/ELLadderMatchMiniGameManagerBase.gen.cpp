// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLadderMatchMiniGameManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLadderMatchMiniGameManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELLadderMatchMiniGameManagerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UClass* Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELLadderMatchMiniGameManagerBase::execHUDFinishedFailedAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HUDFinishedFailedAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELLadderMatchMiniGameManagerBase::execHUDFinishedSucceedAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HUDFinishedSucceedAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELLadderMatchMiniGameManagerBase::execHUDFinishedUnlockAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HUDFinishedUnlockAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELLadderMatchMiniGameManagerBase::execInitialize_N)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_InMesh);
		P_GET_STRUCT(FVector,Z_Param_InHUDOffset);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMashCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize_N(Z_Param_InMesh,Z_Param_InHUDOffset,Z_Param_InMashCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELLadderMatchMiniGameManagerBase::execSetMiniGameHUD)
	{
		P_GET_OBJECT(UELLadderMatchMiniGameHUDBase,Z_Param_InMiniGameHUD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMiniGameHUD(Z_Param_InMiniGameHUD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELLadderMatchMiniGameManagerBase::execSetProgress)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgress(Z_Param_Progress);
		P_NATIVE_END;
	}
	static FName NAME_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP = FName(TEXT("CreateMiniGameHUD_BP"));
	void AELLadderMatchMiniGameManagerBase::CreateMiniGameHUD_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP),NULL);
	}
	static FName NAME_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP = FName(TEXT("OnProgressEvent_BP"));
	void AELLadderMatchMiniGameManagerBase::OnProgressEvent_BP(int32 Progress)
	{
		ELLadderMatchMiniGameManagerBase_eventOnProgressEvent_BP_Parms Parms;
		Parms.Progress=Progress;
		ProcessEvent(FindFunctionChecked(NAME_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP),&Parms);
	}
	void AELLadderMatchMiniGameManagerBase::StaticRegisterNativesAELLadderMatchMiniGameManagerBase()
	{
		UClass* Class = AELLadderMatchMiniGameManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HUDFinishedFailedAnim", &AELLadderMatchMiniGameManagerBase::execHUDFinishedFailedAnim },
			{ "HUDFinishedSucceedAnim", &AELLadderMatchMiniGameManagerBase::execHUDFinishedSucceedAnim },
			{ "HUDFinishedUnlockAnim", &AELLadderMatchMiniGameManagerBase::execHUDFinishedUnlockAnim },
			{ "Initialize_N", &AELLadderMatchMiniGameManagerBase::execInitialize_N },
			{ "SetMiniGameHUD", &AELLadderMatchMiniGameManagerBase::execSetMiniGameHUD },
			{ "SetProgress", &AELLadderMatchMiniGameManagerBase::execSetProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, nullptr, "CreateMiniGameHUD_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedFailedAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedFailedAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedFailedAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, nullptr, "HUDFinishedFailedAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedFailedAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedFailedAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedFailedAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedFailedAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedSucceedAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedSucceedAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedSucceedAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, nullptr, "HUDFinishedSucceedAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedSucceedAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedSucceedAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedSucceedAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedSucceedAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedUnlockAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedUnlockAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedUnlockAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, nullptr, "HUDFinishedUnlockAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedUnlockAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedUnlockAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedUnlockAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedUnlockAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics
	{
		struct ELLadderMatchMiniGameManagerBase_eventInitialize_N_Parms
		{
			USkeletalMeshComponent* InMesh;
			FVector InHUDOffset;
			int32 InMashCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InHUDOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InMashCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameManagerBase_eventInitialize_N_Parms, InMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InMesh_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InHUDOffset = { "InHUDOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameManagerBase_eventInitialize_N_Parms, InHUDOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InMashCount = { "InMashCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameManagerBase_eventInitialize_N_Parms, InMashCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InHUDOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::NewProp_InMashCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, nullptr, "Initialize_N", nullptr, nullptr, sizeof(ELLadderMatchMiniGameManagerBase_eventInitialize_N_Parms), Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameManagerBase_eventOnProgressEvent_BP_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, nullptr, "OnProgressEvent_BP", nullptr, nullptr, sizeof(ELLadderMatchMiniGameManagerBase_eventOnProgressEvent_BP_Parms), Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics
	{
		struct ELLadderMatchMiniGameManagerBase_eventSetMiniGameHUD_Parms
		{
			UELLadderMatchMiniGameHUDBase* InMiniGameHUD;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMiniGameHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMiniGameHUD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::NewProp_InMiniGameHUD_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::NewProp_InMiniGameHUD = { "InMiniGameHUD", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameManagerBase_eventSetMiniGameHUD_Parms, InMiniGameHUD), Z_Construct_UClass_UELLadderMatchMiniGameHUDBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::NewProp_InMiniGameHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::NewProp_InMiniGameHUD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::NewProp_InMiniGameHUD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, nullptr, "SetMiniGameHUD", nullptr, nullptr, sizeof(ELLadderMatchMiniGameManagerBase_eventSetMiniGameHUD_Parms), Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics
	{
		struct ELLadderMatchMiniGameManagerBase_eventSetProgress_Parms
		{
			int32 Progress;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLadderMatchMiniGameManagerBase_eventSetProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, nullptr, "SetProgress", nullptr, nullptr, sizeof(ELLadderMatchMiniGameManagerBase_eventSetProgress_Parms), Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_NoRegister()
	{
		return AELLadderMatchMiniGameManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_CreateMiniGameHUD_BP, "CreateMiniGameHUD_BP" }, // 1020966873
		{ &Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedFailedAnim, "HUDFinishedFailedAnim" }, // 131215007
		{ &Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedSucceedAnim, "HUDFinishedSucceedAnim" }, // 1351820544
		{ &Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_HUDFinishedUnlockAnim, "HUDFinishedUnlockAnim" }, // 2001269274
		{ &Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_Initialize_N, "Initialize_N" }, // 3101737221
		{ &Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_OnProgressEvent_BP, "OnProgressEvent_BP" }, // 87362121
		{ &Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetMiniGameHUD, "SetMiniGameHUD" }, // 2269776732
		{ &Z_Construct_UFunction_AELLadderMatchMiniGameManagerBase_SetProgress, "SetProgress" }, // 2549216627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLadderMatchMiniGameManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLadderMatchMiniGameManagerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELLadderMatchMiniGameManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics::ClassParams = {
		&AELLadderMatchMiniGameManagerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELLadderMatchMiniGameManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELLadderMatchMiniGameManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELLadderMatchMiniGameManagerBase, 2779004211);
	template<> ABP_200508_API UClass* StaticClass<AELLadderMatchMiniGameManagerBase>()
	{
		return AELLadderMatchMiniGameManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELLadderMatchMiniGameManagerBase(Z_Construct_UClass_AELLadderMatchMiniGameManagerBase, &AELLadderMatchMiniGameManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELLadderMatchMiniGameManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELLadderMatchMiniGameManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
