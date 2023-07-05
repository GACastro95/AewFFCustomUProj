// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOnlineTestPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOnlineTestPlayerController() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestPlayerController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSOnlineTestPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(AELSSOnlineTestPlayerController::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestPlayerController::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestPlayerController::execPlayerDisableInput)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDisableInput(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestPlayerController::execPlayerEnableInput)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerEnableInput(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestPlayerController::execRotLookUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotLookUp(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestPlayerController::execRotTurn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotTurn(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSOnlineTestPlayerController::execUIPrepare_RPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UIPrepare_RPC_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AELSSOnlineTestPlayerController_AddInstantMessage = FName(TEXT("AddInstantMessage"));
	void AELSSOnlineTestPlayerController::AddInstantMessage(const FString& inMessage)
	{
		ELSSOnlineTestPlayerController_eventAddInstantMessage_Parms Parms;
		Parms.inMessage=inMessage;
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_AddInstantMessage),&Parms);
	}
	static FName NAME_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce = FName(TEXT("HideAutoEliminateAIAnnounce"));
	void AELSSOnlineTestPlayerController::HideAutoEliminateAIAnnounce()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce),NULL);
	}
	static FName NAME_AELSSOnlineTestPlayerController_HideControlGuide = FName(TEXT("HideControlGuide"));
	void AELSSOnlineTestPlayerController::HideControlGuide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_HideControlGuide),NULL);
	}
	static FName NAME_AELSSOnlineTestPlayerController_HideInGameUI = FName(TEXT("HideInGameUI"));
	void AELSSOnlineTestPlayerController::HideInGameUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_HideInGameUI),NULL);
	}
	static FName NAME_AELSSOnlineTestPlayerController_K2_UIPrepare = FName(TEXT("K2_UIPrepare"));
	void AELSSOnlineTestPlayerController::K2_UIPrepare()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_K2_UIPrepare),NULL);
	}
	static FName NAME_AELSSOnlineTestPlayerController_OnChangeHP = FName(TEXT("OnChangeHP"));
	void AELSSOnlineTestPlayerController::OnChangeHP(int32 inNewHP, int32 inMaxHP)
	{
		ELSSOnlineTestPlayerController_eventOnChangeHP_Parms Parms;
		Parms.inNewHP=inNewHP;
		Parms.inMaxHP=inMaxHP;
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_OnChangeHP),&Parms);
	}
	static FName NAME_AELSSOnlineTestPlayerController_RequestHPGauge = FName(TEXT("RequestHPGauge"));
	void AELSSOnlineTestPlayerController::RequestHPGauge(AActor* InActor, int32 inNewHP, int32 inPrevHP, int32 inMaxHP)
	{
		ELSSOnlineTestPlayerController_eventRequestHPGauge_Parms Parms;
		Parms.InActor=InActor;
		Parms.inNewHP=inNewHP;
		Parms.inPrevHP=inPrevHP;
		Parms.inMaxHP=inMaxHP;
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_RequestHPGauge),&Parms);
	}
	static FName NAME_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce = FName(TEXT("ShowAutoEliminateAIAnnounce"));
	void AELSSOnlineTestPlayerController::ShowAutoEliminateAIAnnounce()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce),NULL);
	}
	static FName NAME_AELSSOnlineTestPlayerController_ShowControlGuide = FName(TEXT("ShowControlGuide"));
	void AELSSOnlineTestPlayerController::ShowControlGuide()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_ShowControlGuide),NULL);
	}
	static FName NAME_AELSSOnlineTestPlayerController_ShowInGameUI = FName(TEXT("ShowInGameUI"));
	void AELSSOnlineTestPlayerController::ShowInGameUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_ShowInGameUI),NULL);
	}
	static FName NAME_AELSSOnlineTestPlayerController_UIPrepare_RPC = FName(TEXT("UIPrepare_RPC"));
	void AELSSOnlineTestPlayerController::UIPrepare_RPC()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSOnlineTestPlayerController_UIPrepare_RPC),NULL);
	}
	void AELSSOnlineTestPlayerController::StaticRegisterNativesAELSSOnlineTestPlayerController()
	{
		UClass* Class = AELSSOnlineTestPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &AELSSOnlineTestPlayerController::execMoveForward },
			{ "MoveRight", &AELSSOnlineTestPlayerController::execMoveRight },
			{ "PlayerDisableInput", &AELSSOnlineTestPlayerController::execPlayerDisableInput },
			{ "PlayerEnableInput", &AELSSOnlineTestPlayerController::execPlayerEnableInput },
			{ "RotLookUp", &AELSSOnlineTestPlayerController::execRotLookUp },
			{ "RotTurn", &AELSSOnlineTestPlayerController::execRotTurn },
			{ "UIPrepare_RPC", &AELSSOnlineTestPlayerController::execUIPrepare_RPC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::NewProp_inMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::NewProp_inMessage = { "inMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventAddInstantMessage_Parms, inMessage), METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::NewProp_inMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::NewProp_inMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::NewProp_inMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "AddInstantMessage", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventAddInstantMessage_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "HideAutoEliminateAIAnnounce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideControlGuide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideControlGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideControlGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "HideControlGuide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideControlGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideControlGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideControlGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideControlGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideInGameUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideInGameUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideInGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "HideInGameUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideInGameUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideInGameUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideInGameUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideInGameUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_K2_UIPrepare_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_K2_UIPrepare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_K2_UIPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "K2_UIPrepare", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_K2_UIPrepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_K2_UIPrepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_K2_UIPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_K2_UIPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics
	{
		struct ELSSOnlineTestPlayerController_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "MoveForward", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventMoveForward_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics
	{
		struct ELSSOnlineTestPlayerController_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "MoveRight", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventMoveRight_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inNewHP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::NewProp_inNewHP = { "inNewHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventOnChangeHP_Parms, inNewHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventOnChangeHP_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::NewProp_inNewHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::NewProp_inMaxHP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "OnChangeHP", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventOnChangeHP_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics
	{
		struct ELSSOnlineTestPlayerController_eventPlayerDisableInput_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventPlayerDisableInput_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "PlayerDisableInput", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventPlayerDisableInput_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics
	{
		struct ELSSOnlineTestPlayerController_eventPlayerEnableInput_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventPlayerEnableInput_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "PlayerEnableInput", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventPlayerEnableInput_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inNewHP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPrevHP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inMaxHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventRequestHPGauge_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::NewProp_inNewHP = { "inNewHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventRequestHPGauge_Parms, inNewHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::NewProp_inPrevHP = { "inPrevHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventRequestHPGauge_Parms, inPrevHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::NewProp_inMaxHP = { "inMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventRequestHPGauge_Parms, inMaxHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::NewProp_inNewHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::NewProp_inPrevHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::NewProp_inMaxHP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "RequestHPGauge", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventRequestHPGauge_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics
	{
		struct ELSSOnlineTestPlayerController_eventRotLookUp_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventRotLookUp_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "RotLookUp", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventRotLookUp_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics
	{
		struct ELSSOnlineTestPlayerController_eventRotTurn_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineTestPlayerController_eventRotTurn_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "RotTurn", nullptr, nullptr, sizeof(ELSSOnlineTestPlayerController_eventRotTurn_Parms), Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "ShowAutoEliminateAIAnnounce", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowControlGuide_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowControlGuide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowControlGuide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "ShowControlGuide", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowControlGuide_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowControlGuide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowControlGuide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowControlGuide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowInGameUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowInGameUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowInGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "ShowInGameUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowInGameUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowInGameUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowInGameUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowInGameUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSOnlineTestPlayerController_UIPrepare_RPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSOnlineTestPlayerController_UIPrepare_RPC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSOnlineTestPlayerController_UIPrepare_RPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSOnlineTestPlayerController, nullptr, "UIPrepare_RPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSOnlineTestPlayerController_UIPrepare_RPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSOnlineTestPlayerController_UIPrepare_RPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSOnlineTestPlayerController_UIPrepare_RPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSOnlineTestPlayerController_UIPrepare_RPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSOnlineTestPlayerController_NoRegister()
	{
		return AELSSOnlineTestPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pitchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pitchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotSpeedYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotSpeedYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotSpeedPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotSpeedPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftStickInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftStickInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_AddInstantMessage, "AddInstantMessage" }, // 3219539115
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideAutoEliminateAIAnnounce, "HideAutoEliminateAIAnnounce" }, // 3587249534
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideControlGuide, "HideControlGuide" }, // 429292894
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_HideInGameUI, "HideInGameUI" }, // 3966863711
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_K2_UIPrepare, "K2_UIPrepare" }, // 3909394336
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveForward, "MoveForward" }, // 155355196
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_MoveRight, "MoveRight" }, // 1119832119
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_OnChangeHP, "OnChangeHP" }, // 4103006223
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerDisableInput, "PlayerDisableInput" }, // 3127553472
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_PlayerEnableInput, "PlayerEnableInput" }, // 64024785
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_RequestHPGauge, "RequestHPGauge" }, // 2336827216
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotLookUp, "RotLookUp" }, // 2436269195
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_RotTurn, "RotTurn" }, // 1865913545
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowAutoEliminateAIAnnounce, "ShowAutoEliminateAIAnnounce" }, // 1217374504
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowControlGuide, "ShowControlGuide" }, // 1905131880
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_ShowInGameUI, "ShowInGameUI" }, // 868099367
		{ &Z_Construct_UFunction_AELSSOnlineTestPlayerController_UIPrepare_RPC, "UIPrepare_RPC" }, // 734004433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELSSOnlineTestPlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_pitchLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_pitchLimit = { "pitchLimit", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestPlayerController, pitchLimit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_pitchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_pitchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedYaw = { "rotSpeedYaw", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestPlayerController, rotSpeedYaw), METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedPitch = { "rotSpeedPitch", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestPlayerController, rotSpeedPitch), METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_LeftStickInput_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineTestPlayerController" },
		{ "ModuleRelativePath", "Public/ELSSOnlineTestPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_LeftStickInput = { "LeftStickInput", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSOnlineTestPlayerController, LeftStickInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_LeftStickInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_LeftStickInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_pitchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_rotSpeedPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::NewProp_LeftStickInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSOnlineTestPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::ClassParams = {
		&AELSSOnlineTestPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSOnlineTestPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSOnlineTestPlayerController, 4186264735);
	template<> ABP_200508_API UClass* StaticClass<AELSSOnlineTestPlayerController>()
	{
		return AELSSOnlineTestPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSOnlineTestPlayerController(Z_Construct_UClass_AELSSOnlineTestPlayerController, &AELSSOnlineTestPlayerController::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSOnlineTestPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSOnlineTestPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
