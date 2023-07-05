// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PAFGameFlowManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PAFGameFlowManager() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowManager::execChangedGameFlowStepForAllPlayers)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangedGameFlowStepForAllPlayers(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowManager::execGetGameFlowStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSSessionP2PAFGameFlowStep*)Z_Param__Result=P_THIS->GetGameFlowStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowManager::execInitGameFlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitGameFlow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowManager::execIsPossibleChangeGameFlowStepForAllPlayers)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPossibleChangeGameFlowStepForAllPlayers(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowManager::execQuitGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QuitGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowManager::execRegistGameFlowCallbackInterface)
	{
		P_GET_TINTERFACE(IEOSSessionP2PAFGameFlowCallbackInterface,Z_Param__pcIntarface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegistGameFlowCallbackInterface(Z_Param__pcIntarface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowManager::execRequestChangeGameFlow)
	{
		P_GET_ENUM(EEOSSessionP2PAFGameFlowStep,Z_Param__enGameFlowStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestChangeGameFlow(EEOSSessionP2PAFGameFlowStep(Z_Param__enGameFlowStep));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSessionP2PAFGameFlowManager::execUnregistGameFlowCallbackInterface)
	{
		P_GET_TINTERFACE(IEOSSessionP2PAFGameFlowCallbackInterface,Z_Param__pcIntarface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregistGameFlowCallbackInterface(Z_Param__pcIntarface);
		P_NATIVE_END;
	}
	void UEOSSessionP2PAFGameFlowManager::StaticRegisterNativesUEOSSessionP2PAFGameFlowManager()
	{
		UClass* Class = UEOSSessionP2PAFGameFlowManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangedGameFlowStepForAllPlayers", &UEOSSessionP2PAFGameFlowManager::execChangedGameFlowStepForAllPlayers },
			{ "GetGameFlowStep", &UEOSSessionP2PAFGameFlowManager::execGetGameFlowStep },
			{ "InitGameFlow", &UEOSSessionP2PAFGameFlowManager::execInitGameFlow },
			{ "IsPossibleChangeGameFlowStepForAllPlayers", &UEOSSessionP2PAFGameFlowManager::execIsPossibleChangeGameFlowStepForAllPlayers },
			{ "QuitGame", &UEOSSessionP2PAFGameFlowManager::execQuitGame },
			{ "RegistGameFlowCallbackInterface", &UEOSSessionP2PAFGameFlowManager::execRegistGameFlowCallbackInterface },
			{ "RequestChangeGameFlow", &UEOSSessionP2PAFGameFlowManager::execRequestChangeGameFlow },
			{ "UnregistGameFlowCallbackInterface", &UEOSSessionP2PAFGameFlowManager::execUnregistGameFlowCallbackInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics
	{
		struct EOSSessionP2PAFGameFlowManager_eventChangedGameFlowStepForAllPlayers_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowManager_eventChangedGameFlowStepForAllPlayers_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowManager_eventChangedGameFlowStepForAllPlayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowManager_eventChangedGameFlowStepForAllPlayers_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, nullptr, "ChangedGameFlowStepForAllPlayers", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowManager_eventChangedGameFlowStepForAllPlayers_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics
	{
		struct EOSSessionP2PAFGameFlowManager_eventGetGameFlowStep_Parms
		{
			EEOSSessionP2PAFGameFlowStep ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowManager_eventGetGameFlowStep_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, nullptr, "GetGameFlowStep", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowManager_eventGetGameFlowStep_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics
	{
		struct EOSSessionP2PAFGameFlowManager_eventInitGameFlow_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowManager_eventInitGameFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowManager_eventInitGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, nullptr, "InitGameFlow", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowManager_eventInitGameFlow_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics
	{
		struct EOSSessionP2PAFGameFlowManager_eventIsPossibleChangeGameFlowStepForAllPlayers_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowManager_eventIsPossibleChangeGameFlowStepForAllPlayers_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowManager_eventIsPossibleChangeGameFlowStepForAllPlayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowManager_eventIsPossibleChangeGameFlowStepForAllPlayers_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, nullptr, "IsPossibleChangeGameFlowStepForAllPlayers", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowManager_eventIsPossibleChangeGameFlowStepForAllPlayers_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics
	{
		struct EOSSessionP2PAFGameFlowManager_eventQuitGame_Parms
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
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowManager_eventQuitGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowManager_eventQuitGame_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, nullptr, "QuitGame", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowManager_eventQuitGame_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics
	{
		struct EOSSessionP2PAFGameFlowManager_eventRegistGameFlowCallbackInterface_Parms
		{
			TScriptInterface<IEOSSessionP2PAFGameFlowCallbackInterface> _pcIntarface;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__pcIntarface;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::NewProp__pcIntarface = { "_pcIntarface", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowManager_eventRegistGameFlowCallbackInterface_Parms, _pcIntarface), Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowManager_eventRegistGameFlowCallbackInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowManager_eventRegistGameFlowCallbackInterface_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::NewProp__pcIntarface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, nullptr, "RegistGameFlowCallbackInterface", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowManager_eventRegistGameFlowCallbackInterface_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics
	{
		struct EOSSessionP2PAFGameFlowManager_eventRequestChangeGameFlow_Parms
		{
			EEOSSessionP2PAFGameFlowStep _enGameFlowStep;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enGameFlowStep_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enGameFlowStep;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::NewProp__enGameFlowStep_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::NewProp__enGameFlowStep = { "_enGameFlowStep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowManager_eventRequestChangeGameFlow_Parms, _enGameFlowStep), Z_Construct_UEnum_yEOSSDK_EEOSSessionP2PAFGameFlowStep, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowManager_eventRequestChangeGameFlow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowManager_eventRequestChangeGameFlow_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::NewProp__enGameFlowStep_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::NewProp__enGameFlowStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, nullptr, "RequestChangeGameFlow", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowManager_eventRequestChangeGameFlow_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics
	{
		struct EOSSessionP2PAFGameFlowManager_eventUnregistGameFlowCallbackInterface_Parms
		{
			TScriptInterface<IEOSSessionP2PAFGameFlowCallbackInterface> _pcIntarface;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__pcIntarface;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::NewProp__pcIntarface = { "_pcIntarface", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSessionP2PAFGameFlowManager_eventUnregistGameFlowCallbackInterface_Parms, _pcIntarface), Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSessionP2PAFGameFlowManager_eventUnregistGameFlowCallbackInterface_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSessionP2PAFGameFlowManager_eventUnregistGameFlowCallbackInterface_Parms), &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::NewProp__pcIntarface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, nullptr, "UnregistGameFlowCallbackInterface", nullptr, nullptr, sizeof(EOSSessionP2PAFGameFlowManager_eventUnregistGameFlowCallbackInterface_Parms), Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_NoRegister()
	{
		return UEOSSessionP2PAFGameFlowManager::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_m_cGameFlowCallbacks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cGameFlowCallbacks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cGameFlowCallbacks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_ChangedGameFlowStepForAllPlayers, "ChangedGameFlowStepForAllPlayers" }, // 336437475
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_GetGameFlowStep, "GetGameFlowStep" }, // 1047223191
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_InitGameFlow, "InitGameFlow" }, // 1057648023
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_IsPossibleChangeGameFlowStepForAllPlayers, "IsPossibleChangeGameFlowStepForAllPlayers" }, // 905823107
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_QuitGame, "QuitGame" }, // 1902851898
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RegistGameFlowCallbackInterface, "RegistGameFlowCallbackInterface" }, // 2438867191
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_RequestChangeGameFlow, "RequestChangeGameFlow" }, // 401352328
		{ &Z_Construct_UFunction_UEOSSessionP2PAFGameFlowManager_UnregistGameFlowCallbackInterface, "UnregistGameFlowCallbackInterface" }, // 3774495089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PAFGameFlowManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::NewProp_m_cGameFlowCallbacks_Inner = { "m_cGameFlowCallbacks", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSSessionP2PAFGameFlowCallbackInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::NewProp_m_cGameFlowCallbacks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PAFGameFlowManager" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAFGameFlowManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::NewProp_m_cGameFlowCallbacks = { "m_cGameFlowCallbacks", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PAFGameFlowManager, m_cGameFlowCallbacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::NewProp_m_cGameFlowCallbacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::NewProp_m_cGameFlowCallbacks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::NewProp_m_cGameFlowCallbacks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::NewProp_m_cGameFlowCallbacks,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PAFGameFlowManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::ClassParams = {
		&UEOSSessionP2PAFGameFlowManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PAFGameFlowManager, 257057394);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PAFGameFlowManager>()
	{
		return UEOSSessionP2PAFGameFlowManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PAFGameFlowManager(Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager, &UEOSSessionP2PAFGameFlowManager::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PAFGameFlowManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PAFGameFlowManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
