// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetPawn() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELNetPawn_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetRole();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELNetPawn::execHasELNetAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPawn::execHasELNetExecAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetExecAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPawn::execSetELNetAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPawn::execSetELNetModeBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetModeBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetPawn::execSetELNetTemporaryAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetELNetTemporaryAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	static FName NAME_AELNetPawn_EventInput_EntranceCamera_Next_Pressed = FName(TEXT("EventInput_EntranceCamera_Next_Pressed"));
	void AELNetPawn::EventInput_EntranceCamera_Next_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceCamera_Next_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceCamera_Next_Released = FName(TEXT("EventInput_EntranceCamera_Next_Released"));
	void AELNetPawn::EventInput_EntranceCamera_Next_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceCamera_Next_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed = FName(TEXT("EventInput_EntranceCamera_Previous_Pressed"));
	void AELNetPawn::EventInput_EntranceCamera_Previous_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceCamera_Previous_Released = FName(TEXT("EventInput_EntranceCamera_Previous_Released"));
	void AELNetPawn::EventInput_EntranceCamera_Previous_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceCamera_Previous_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceCamera_ZoomOut = FName(TEXT("EventInput_EntranceCamera_ZoomOut"));
	void AELNetPawn::EventInput_EntranceCamera_ZoomOut(float AxisValue)
	{
		ELNetPawn_eventEventInput_EntranceCamera_ZoomOut_Parms Parms;
		Parms.AxisValue=AxisValue;
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceCamera_ZoomOut),&Parms);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceCamera_ZoomUp = FName(TEXT("EventInput_EntranceCamera_ZoomUp"));
	void AELNetPawn::EventInput_EntranceCamera_ZoomUp(float AxisValue)
	{
		ELNetPawn_eventEventInput_EntranceCamera_ZoomUp_Parms Parms;
		Parms.AxisValue=AxisValue;
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceCamera_ZoomUp),&Parms);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceEffect_D_Pressed = FName(TEXT("EventInput_EntranceEffect_D_Pressed"));
	void AELNetPawn::EventInput_EntranceEffect_D_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceEffect_D_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceEffect_D_Released = FName(TEXT("EventInput_EntranceEffect_D_Released"));
	void AELNetPawn::EventInput_EntranceEffect_D_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceEffect_D_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceEffect_L_Pressed = FName(TEXT("EventInput_EntranceEffect_L_Pressed"));
	void AELNetPawn::EventInput_EntranceEffect_L_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceEffect_L_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceEffect_L_Released = FName(TEXT("EventInput_EntranceEffect_L_Released"));
	void AELNetPawn::EventInput_EntranceEffect_L_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceEffect_L_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceEffect_R_Pressed = FName(TEXT("EventInput_EntranceEffect_R_Pressed"));
	void AELNetPawn::EventInput_EntranceEffect_R_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceEffect_R_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceEffect_R_Released = FName(TEXT("EventInput_EntranceEffect_R_Released"));
	void AELNetPawn::EventInput_EntranceEffect_R_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceEffect_R_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceEffect_U_Pressed = FName(TEXT("EventInput_EntranceEffect_U_Pressed"));
	void AELNetPawn::EventInput_EntranceEffect_U_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceEffect_U_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceEffect_U_Released = FName(TEXT("EventInput_EntranceEffect_U_Released"));
	void AELNetPawn::EventInput_EntranceEffect_U_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceEffect_U_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntrancePyro00_Pressed = FName(TEXT("EventInput_EntrancePyro00_Pressed"));
	void AELNetPawn::EventInput_EntrancePyro00_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntrancePyro00_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntrancePyro00_Released = FName(TEXT("EventInput_EntrancePyro00_Released"));
	void AELNetPawn::EventInput_EntrancePyro00_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntrancePyro00_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntrancePyro01_Pressed = FName(TEXT("EventInput_EntrancePyro01_Pressed"));
	void AELNetPawn::EventInput_EntrancePyro01_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntrancePyro01_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntrancePyro01_Released = FName(TEXT("EventInput_EntrancePyro01_Released"));
	void AELNetPawn::EventInput_EntrancePyro01_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntrancePyro01_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntrancePyro02_Pressed = FName(TEXT("EventInput_EntrancePyro02_Pressed"));
	void AELNetPawn::EventInput_EntrancePyro02_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntrancePyro02_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntrancePyro02_Released = FName(TEXT("EventInput_EntrancePyro02_Released"));
	void AELNetPawn::EventInput_EntrancePyro02_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntrancePyro02_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntrancePyro03_Pressed = FName(TEXT("EventInput_EntrancePyro03_Pressed"));
	void AELNetPawn::EventInput_EntrancePyro03_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntrancePyro03_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntrancePyro03_Released = FName(TEXT("EventInput_EntrancePyro03_Released"));
	void AELNetPawn::EventInput_EntrancePyro03_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntrancePyro03_Released),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceSkip_Pressed = FName(TEXT("EventInput_EntranceSkip_Pressed"));
	void AELNetPawn::EventInput_EntranceSkip_Pressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceSkip_Pressed),NULL);
	}
	static FName NAME_AELNetPawn_EventInput_EntranceSkip_Released = FName(TEXT("EventInput_EntranceSkip_Released"));
	void AELNetPawn::EventInput_EntranceSkip_Released()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNetPawn_EventInput_EntranceSkip_Released),NULL);
	}
	void AELNetPawn::StaticRegisterNativesAELNetPawn()
	{
		UClass* Class = AELNetPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasELNetAuthorityBP", &AELNetPawn::execHasELNetAuthorityBP },
			{ "HasELNetExecAuthorityBP", &AELNetPawn::execHasELNetExecAuthorityBP },
			{ "SetELNetAuthorityBP", &AELNetPawn::execSetELNetAuthorityBP },
			{ "SetELNetModeBP", &AELNetPawn::execSetELNetModeBP },
			{ "SetELNetTemporaryAuthorityBP", &AELNetPawn::execSetELNetTemporaryAuthorityBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceCamera_Next_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceCamera_Next_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceCamera_Previous_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceCamera_Previous_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetPawn_eventEventInput_EntranceCamera_ZoomOut_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceCamera_ZoomOut", nullptr, nullptr, sizeof(ELNetPawn_eventEventInput_EntranceCamera_ZoomOut_Parms), Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetPawn_eventEventInput_EntranceCamera_ZoomUp_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceCamera_ZoomUp", nullptr, nullptr, sizeof(ELNetPawn_eventEventInput_EntranceCamera_ZoomUp_Parms), Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceEffect_D_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceEffect_D_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceEffect_L_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceEffect_L_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceEffect_R_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceEffect_R_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceEffect_U_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceEffect_U_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntrancePyro00_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntrancePyro00_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntrancePyro01_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntrancePyro01_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntrancePyro02_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntrancePyro02_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntrancePyro03_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntrancePyro03_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Pressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Pressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Pressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceSkip_Pressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Pressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Pressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Pressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Pressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Released_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Released_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Released_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "EventInput_EntranceSkip_Released", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Released_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Released_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Released()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Released_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics
	{
		struct ELNetPawn_eventHasELNetAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetPawn_eventHasELNetAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPawn_eventHasELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "HasELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetPawn_eventHasELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics
	{
		struct ELNetPawn_eventHasELNetExecAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetPawn_eventHasELNetExecAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPawn_eventHasELNetExecAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "HasELNetExecAuthorityBP", nullptr, nullptr, sizeof(ELNetPawn_eventHasELNetExecAuthorityBP_Parms), Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics
	{
		struct ELNetPawn_eventSetELNetAuthorityBP_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetPawn_eventSetELNetAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPawn_eventSetELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "SetELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetPawn_eventSetELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics
	{
		struct ELNetPawn_eventSetELNetModeBP_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetPawn_eventSetELNetModeBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPawn_eventSetELNetModeBP_Parms), &Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "SetELNetModeBP", nullptr, nullptr, sizeof(ELNetPawn_eventSetELNetModeBP_Parms), Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_SetELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_SetELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics
	{
		struct ELNetPawn_eventSetELNetTemporaryAuthorityBP_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetPawn_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPawn_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetPawn_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetPawn_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetPawn, nullptr, "SetELNetTemporaryAuthorityBP", nullptr, nullptr, sizeof(ELNetPawn_eventSetELNetTemporaryAuthorityBP_Parms), Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELNetPawn_NoRegister()
	{
		return AELNetPawn::StaticClass();
	}
	struct Z_Construct_UClass_AELNetPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ELNetRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELNetRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ELNetRole;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELNetPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELNetPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Pressed, "EventInput_EntranceCamera_Next_Pressed" }, // 2035201568
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Next_Released, "EventInput_EntranceCamera_Next_Released" }, // 2492732719
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Pressed, "EventInput_EntranceCamera_Previous_Pressed" }, // 3829072632
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_Previous_Released, "EventInput_EntranceCamera_Previous_Released" }, // 3191080804
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomOut, "EventInput_EntranceCamera_ZoomOut" }, // 3090235494
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceCamera_ZoomUp, "EventInput_EntranceCamera_ZoomUp" }, // 2171830450
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Pressed, "EventInput_EntranceEffect_D_Pressed" }, // 3721436990
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_D_Released, "EventInput_EntranceEffect_D_Released" }, // 185149287
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Pressed, "EventInput_EntranceEffect_L_Pressed" }, // 2864220527
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_L_Released, "EventInput_EntranceEffect_L_Released" }, // 1335768740
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Pressed, "EventInput_EntranceEffect_R_Pressed" }, // 4263494501
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_R_Released, "EventInput_EntranceEffect_R_Released" }, // 380876797
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Pressed, "EventInput_EntranceEffect_U_Pressed" }, // 1741295186
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceEffect_U_Released, "EventInput_EntranceEffect_U_Released" }, // 2693362862
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Pressed, "EventInput_EntrancePyro00_Pressed" }, // 1450209771
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro00_Released, "EventInput_EntrancePyro00_Released" }, // 2380390659
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Pressed, "EventInput_EntrancePyro01_Pressed" }, // 267661945
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro01_Released, "EventInput_EntrancePyro01_Released" }, // 798107189
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Pressed, "EventInput_EntrancePyro02_Pressed" }, // 1736723525
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro02_Released, "EventInput_EntrancePyro02_Released" }, // 1778154294
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Pressed, "EventInput_EntrancePyro03_Pressed" }, // 836163505
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntrancePyro03_Released, "EventInput_EntrancePyro03_Released" }, // 990242833
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Pressed, "EventInput_EntranceSkip_Pressed" }, // 2254631009
		{ &Z_Construct_UFunction_AELNetPawn_EventInput_EntranceSkip_Released, "EventInput_EntranceSkip_Released" }, // 1774054123
		{ &Z_Construct_UFunction_AELNetPawn_HasELNetAuthorityBP, "HasELNetAuthorityBP" }, // 1487736655
		{ &Z_Construct_UFunction_AELNetPawn_HasELNetExecAuthorityBP, "HasELNetExecAuthorityBP" }, // 1844454038
		{ &Z_Construct_UFunction_AELNetPawn_SetELNetAuthorityBP, "SetELNetAuthorityBP" }, // 413415693
		{ &Z_Construct_UFunction_AELNetPawn_SetELNetModeBP, "SetELNetModeBP" }, // 3631504913
		{ &Z_Construct_UFunction_AELNetPawn_SetELNetTemporaryAuthorityBP, "SetELNetTemporaryAuthorityBP" }, // 2094933048
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ELNetPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELNetPawn_Statics::NewProp_ELNetRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetPawn_Statics::NewProp_ELNetRole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetPawn" },
		{ "ModuleRelativePath", "Public/ELNetPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELNetPawn_Statics::NewProp_ELNetRole = { "ELNetRole", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetPawn, ELNetRole), Z_Construct_UEnum_ABP_200508_EELNetRole, METADATA_PARAMS(Z_Construct_UClass_AELNetPawn_Statics::NewProp_ELNetRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetPawn_Statics::NewProp_ELNetRole_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELNetPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetPawn_Statics::NewProp_ELNetRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetPawn_Statics::NewProp_ELNetRole,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELNetPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELNetObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELNetPawn, IELNetObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELNetPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELNetPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELNetPawn_Statics::ClassParams = {
		&AELNetPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELNetPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELNetPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELNetPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELNetPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELNetPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELNetPawn, 419928531);
	template<> ABP_200508_API UClass* StaticClass<AELNetPawn>()
	{
		return AELNetPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELNetPawn(Z_Construct_UClass_AELNetPawn, &AELNetPawn::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELNetPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELNetPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
