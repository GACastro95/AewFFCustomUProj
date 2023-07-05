// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActionCameraController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActionCameraController() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionCameraController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionCameraController();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameplayCamera_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCameraParamManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSActionCameraController::execChangeStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeStep(Z_Param_inStep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finish();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execGetCurrentStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execGetTargetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTargetLocation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execIsActiveTargetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActiveTargetLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execOnBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBegin_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execOnChangeStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeStep_Implementation(Z_Param_inStep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execOnEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execOnTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTick_Implementation(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execReserveNextStep)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inStep);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inTimer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveNextStep(Z_Param_inStep,Z_Param_inTimer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execSetActiveTargetLocation)
	{
		P_GET_UBOOL(Z_Param_flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveTargetLocation(Z_Param_flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execSetTargetLocationToOpponent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inTargetRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inHeightCoef);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetLocationToOpponent(Z_Param_inTargetRate,Z_Param_inHeightCoef,Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execSetTargetLocationToOwner)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetLocationToOwner(Z_Param_InDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSActionCameraController::execUpdateOnTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOnTick(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	static FName NAME_UELSSActionCameraController_GetTargetLocation = FName(TEXT("GetTargetLocation"));
	FVector UELSSActionCameraController::GetTargetLocation() const
	{
		ELSSActionCameraController_eventGetTargetLocation_Parms Parms;
		const_cast<UELSSActionCameraController*>(this)->ProcessEvent(FindFunctionChecked(NAME_UELSSActionCameraController_GetTargetLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UELSSActionCameraController_OnBegin = FName(TEXT("OnBegin"));
	void UELSSActionCameraController::OnBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionCameraController_OnBegin),NULL);
	}
	static FName NAME_UELSSActionCameraController_OnChangeStep = FName(TEXT("OnChangeStep"));
	void UELSSActionCameraController::OnChangeStep(int32 inStep)
	{
		ELSSActionCameraController_eventOnChangeStep_Parms Parms;
		Parms.inStep=inStep;
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionCameraController_OnChangeStep),&Parms);
	}
	static FName NAME_UELSSActionCameraController_OnEnd = FName(TEXT("OnEnd"));
	void UELSSActionCameraController::OnEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionCameraController_OnEnd),NULL);
	}
	static FName NAME_UELSSActionCameraController_OnTick = FName(TEXT("OnTick"));
	void UELSSActionCameraController::OnTick(float inDeltaSeconds)
	{
		ELSSActionCameraController_eventOnTick_Parms Parms;
		Parms.inDeltaSeconds=inDeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UELSSActionCameraController_OnTick),&Parms);
	}
	void UELSSActionCameraController::StaticRegisterNativesUELSSActionCameraController()
	{
		UClass* Class = UELSSActionCameraController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeStep", &UELSSActionCameraController::execChangeStep },
			{ "Finish", &UELSSActionCameraController::execFinish },
			{ "GetCurrentStep", &UELSSActionCameraController::execGetCurrentStep },
			{ "GetTargetLocation", &UELSSActionCameraController::execGetTargetLocation },
			{ "IsActive", &UELSSActionCameraController::execIsActive },
			{ "IsActiveTargetLocation", &UELSSActionCameraController::execIsActiveTargetLocation },
			{ "OnBegin", &UELSSActionCameraController::execOnBegin },
			{ "OnChangeStep", &UELSSActionCameraController::execOnChangeStep },
			{ "OnEnd", &UELSSActionCameraController::execOnEnd },
			{ "OnTick", &UELSSActionCameraController::execOnTick },
			{ "Play", &UELSSActionCameraController::execPlay },
			{ "ReserveNextStep", &UELSSActionCameraController::execReserveNextStep },
			{ "SetActiveTargetLocation", &UELSSActionCameraController::execSetActiveTargetLocation },
			{ "SetTargetLocationToOpponent", &UELSSActionCameraController::execSetTargetLocationToOpponent },
			{ "SetTargetLocationToOwner", &UELSSActionCameraController::execSetTargetLocationToOwner },
			{ "UpdateOnTick", &UELSSActionCameraController::execUpdateOnTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics
	{
		struct ELSSActionCameraController_eventChangeStep_Parms
		{
			int32 inStep;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::NewProp_inStep = { "inStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventChangeStep_Parms, inStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::NewProp_inStep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "ChangeStep", nullptr, nullptr, sizeof(ELSSActionCameraController_eventChangeStep_Parms), Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_ChangeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_ChangeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_Finish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_Finish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "Finish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics
	{
		struct ELSSActionCameraController_eventGetCurrentStep_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventGetCurrentStep_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "GetCurrentStep", nullptr, nullptr, sizeof(ELSSActionCameraController_eventGetCurrentStep_Parms), Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventGetTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "GetTargetLocation", nullptr, nullptr, sizeof(ELSSActionCameraController_eventGetTargetLocation_Parms), Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics
	{
		struct ELSSActionCameraController_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionCameraController_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionCameraController_eventIsActive_Parms), &Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "IsActive", nullptr, nullptr, sizeof(ELSSActionCameraController_eventIsActive_Parms), Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics
	{
		struct ELSSActionCameraController_eventIsActiveTargetLocation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSActionCameraController_eventIsActiveTargetLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionCameraController_eventIsActiveTargetLocation_Parms), &Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "IsActiveTargetLocation", nullptr, nullptr, sizeof(ELSSActionCameraController_eventIsActiveTargetLocation_Parms), Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_OnBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_OnBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_OnBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "OnBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_OnBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_OnBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_OnBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_OnBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inStep;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::NewProp_inStep = { "inStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventOnChangeStep_Parms, inStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::NewProp_inStep,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "OnChangeStep", nullptr, nullptr, sizeof(ELSSActionCameraController_eventOnChangeStep_Parms), Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_OnEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_OnEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_OnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "OnEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_OnEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_OnEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_OnEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_OnEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventOnTick_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "OnTick", nullptr, nullptr, sizeof(ELSSActionCameraController_eventOnTick_Parms), Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_OnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_OnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_Play_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics
	{
		struct ELSSActionCameraController_eventReserveNextStep_Parms
		{
			int32 inStep;
			float inTimer;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inStep;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::NewProp_inStep = { "inStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventReserveNextStep_Parms, inStep), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::NewProp_inTimer = { "inTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventReserveNextStep_Parms, inTimer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::NewProp_inStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::NewProp_inTimer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "ReserveNextStep", nullptr, nullptr, sizeof(ELSSActionCameraController_eventReserveNextStep_Parms), Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics
	{
		struct ELSSActionCameraController_eventSetActiveTargetLocation_Parms
		{
			bool flg;
		};
		static void NewProp_flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::NewProp_flg_SetBit(void* Obj)
	{
		((ELSSActionCameraController_eventSetActiveTargetLocation_Parms*)Obj)->flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::NewProp_flg = { "flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSActionCameraController_eventSetActiveTargetLocation_Parms), &Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::NewProp_flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::NewProp_flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "SetActiveTargetLocation", nullptr, nullptr, sizeof(ELSSActionCameraController_eventSetActiveTargetLocation_Parms), Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics
	{
		struct ELSSActionCameraController_eventSetTargetLocationToOpponent_Parms
		{
			float inTargetRate;
			float inHeightCoef;
			float InDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inTargetRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inHeightCoef;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::NewProp_inTargetRate = { "inTargetRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventSetTargetLocationToOpponent_Parms, inTargetRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::NewProp_inHeightCoef = { "inHeightCoef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventSetTargetLocationToOpponent_Parms, inHeightCoef), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventSetTargetLocationToOpponent_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::NewProp_inTargetRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::NewProp_inHeightCoef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "SetTargetLocationToOpponent", nullptr, nullptr, sizeof(ELSSActionCameraController_eventSetTargetLocationToOpponent_Parms), Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics
	{
		struct ELSSActionCameraController_eventSetTargetLocationToOwner_Parms
		{
			float InDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventSetTargetLocationToOwner_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::NewProp_InDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "SetTargetLocationToOwner", nullptr, nullptr, sizeof(ELSSActionCameraController_eventSetTargetLocationToOwner_Parms), Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics
	{
		struct ELSSActionCameraController_eventUpdateOnTick_Parms
		{
			float inDeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActionCameraController_eventUpdateOnTick_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActionCameraController, nullptr, "UpdateOnTick", nullptr, nullptr, sizeof(ELSSActionCameraController_eventUpdateOnTick_Parms), Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSActionCameraController_NoRegister()
	{
		return UELSSActionCameraController::StaticClass();
	}
	struct Z_Construct_UClass_UELSSActionCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTargetLocation_MetaData[];
#endif
		static void NewProp_ActiveTargetLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActiveTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationLerpAlphaSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLocationLerpAlphaSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationLerpHeightCoef_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLocationLerpHeightCoef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationLerpAlphaTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLocationLerpAlphaTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationLerpAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLocationLerpAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIsEnableUserRotate_MetaData[];
#endif
		static void NewProp_StatusIsEnableUserRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StatusIsEnableUserRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIsEnableUpdateState_MetaData[];
#endif
		static void NewProp_StatusIsEnableUpdateState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StatusIsEnableUpdateState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpponentPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpponentPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameplayCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParamManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpponentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpponentLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIsActive_MetaData[];
#endif
		static void NewProp_StatusIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StatusIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSActionCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSActionCameraController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSActionCameraController_ChangeStep, "ChangeStep" }, // 2731971948
		{ &Z_Construct_UFunction_UELSSActionCameraController_Finish, "Finish" }, // 596347784
		{ &Z_Construct_UFunction_UELSSActionCameraController_GetCurrentStep, "GetCurrentStep" }, // 1018409201
		{ &Z_Construct_UFunction_UELSSActionCameraController_GetTargetLocation, "GetTargetLocation" }, // 856820503
		{ &Z_Construct_UFunction_UELSSActionCameraController_IsActive, "IsActive" }, // 3691657505
		{ &Z_Construct_UFunction_UELSSActionCameraController_IsActiveTargetLocation, "IsActiveTargetLocation" }, // 2523617113
		{ &Z_Construct_UFunction_UELSSActionCameraController_OnBegin, "OnBegin" }, // 3704797389
		{ &Z_Construct_UFunction_UELSSActionCameraController_OnChangeStep, "OnChangeStep" }, // 2521404489
		{ &Z_Construct_UFunction_UELSSActionCameraController_OnEnd, "OnEnd" }, // 228721866
		{ &Z_Construct_UFunction_UELSSActionCameraController_OnTick, "OnTick" }, // 3307414966
		{ &Z_Construct_UFunction_UELSSActionCameraController_Play, "Play" }, // 1463940541
		{ &Z_Construct_UFunction_UELSSActionCameraController_ReserveNextStep, "ReserveNextStep" }, // 2565160435
		{ &Z_Construct_UFunction_UELSSActionCameraController_SetActiveTargetLocation, "SetActiveTargetLocation" }, // 2230642653
		{ &Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOpponent, "SetTargetLocationToOpponent" }, // 1037752788
		{ &Z_Construct_UFunction_UELSSActionCameraController_SetTargetLocationToOwner, "SetTargetLocationToOwner" }, // 2729798128
		{ &Z_Construct_UFunction_UELSSActionCameraController_UpdateOnTick, "UpdateOnTick" }, // 3747008910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSActionCameraController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ActiveTargetLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ActiveTargetLocation_SetBit(void* Obj)
	{
		((UELSSActionCameraController*)Obj)->ActiveTargetLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ActiveTargetLocation = { "ActiveTargetLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionCameraController), &Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ActiveTargetLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ActiveTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ActiveTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaSpeed = { "TargetLocationLerpAlphaSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, TargetLocationLerpAlphaSpeed), METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpHeightCoef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpHeightCoef = { "TargetLocationLerpHeightCoef", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, TargetLocationLerpHeightCoef), METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpHeightCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpHeightCoef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaTarget = { "TargetLocationLerpAlphaTarget", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, TargetLocationLerpAlphaTarget), METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlpha = { "TargetLocationLerpAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, TargetLocationLerpAlpha), METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUserRotate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUserRotate_SetBit(void* Obj)
	{
		((UELSSActionCameraController*)Obj)->StatusIsEnableUserRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUserRotate = { "StatusIsEnableUserRotate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionCameraController), &Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUserRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUserRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUserRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUpdateState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUpdateState_SetBit(void* Obj)
	{
		((UELSSActionCameraController*)Obj)->StatusIsEnableUpdateState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUpdateState = { "StatusIsEnableUpdateState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionCameraController), &Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUpdateState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUpdateState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUpdateState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_MainPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_MainPlayer = { "MainPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, MainPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_MainPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_MainPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentPlayer = { "OpponentPlayer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, OpponentPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_GameplayCamera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_GameplayCamera = { "GameplayCamera", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, GameplayCamera), Z_Construct_UClass_AELSSGameplayCamera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_GameplayCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_GameplayCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ParamManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ParamManager = { "ParamManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, ParamManager), Z_Construct_UClass_UELSSCameraParamManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ParamManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ParamManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentLocation = { "OpponentLocation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, OpponentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_CurrentStep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_CurrentStep = { "CurrentStep", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionCameraController, CurrentStep), METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_CurrentStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_CurrentStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsActive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionCameraController" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraController.h" },
	};
#endif
	void Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsActive_SetBit(void* Obj)
	{
		((UELSSActionCameraController*)Obj)->StatusIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsActive = { "StatusIsActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSActionCameraController), &Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSActionCameraController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ActiveTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpHeightCoef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlphaTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_TargetLocationLerpAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUserRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsEnableUpdateState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_MainPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_GameplayCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_ParamManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_OpponentLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_CurrentStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionCameraController_Statics::NewProp_StatusIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSActionCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSActionCameraController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSActionCameraController_Statics::ClassParams = {
		&UELSSActionCameraController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSActionCameraController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSActionCameraController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSActionCameraController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSActionCameraController, 226639122);
	template<> ABP_200508_API UClass* StaticClass<UELSSActionCameraController>()
	{
		return UELSSActionCameraController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSActionCameraController(Z_Construct_UClass_UELSSActionCameraController, &UELSSActionCameraController::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSActionCameraController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSActionCameraController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
