// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSRoundManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSRoundManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSRoundManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSRoundManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRound();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStorm_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundParam();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSRoundEventDispatcher__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSRoundOnTickEventDispatcher__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRoundState();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundAdjustParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSManagerActorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSRoundManager::execGetCurrentRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSRound*)Z_Param__Result=P_THIS->GetCurrentRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execGetStorm)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSStorm**)Z_Param__Result=P_THIS->GetStorm();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execIsRoundFinal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRoundFinal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execOnBeginRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginRound_Implementation(Z_Param_Out_inRoundParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execOnEndRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndRound_Implementation(Z_Param_Out_inRoundParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execOnRep_ElapsedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ElapsedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execOnRep_RoundTotalTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_RoundTotalTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execOnTickRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inNewRoundTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inPrevRoundTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickRound_Implementation(Z_Param_Out_inRoundParam,Z_Param_inNewRoundTime,Z_Param_inPrevRoundTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execSetUIManagerActor)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIManagerActor(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execStartReadyState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartReadyState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSRoundManager::execStartRound0)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRound0();
		P_NATIVE_END;
	}
	static FName NAME_AELSSRoundManager_InitializeRoundParamArray = FName(TEXT("InitializeRoundParamArray"));
	void AELSSRoundManager::InitializeRoundParamArray()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELSSRoundManager_InitializeRoundParamArray),NULL);
	}
	static FName NAME_AELSSRoundManager_OnBeginRound = FName(TEXT("OnBeginRound"));
	void AELSSRoundManager::OnBeginRound(FSSRoundParam const& inRoundParam)
	{
		ELSSRoundManager_eventOnBeginRound_Parms Parms;
		Parms.inRoundParam=inRoundParam;
		ProcessEvent(FindFunctionChecked(NAME_AELSSRoundManager_OnBeginRound),&Parms);
	}
	static FName NAME_AELSSRoundManager_OnEndRound = FName(TEXT("OnEndRound"));
	void AELSSRoundManager::OnEndRound(FSSRoundParam const& inRoundParam)
	{
		ELSSRoundManager_eventOnEndRound_Parms Parms;
		Parms.inRoundParam=inRoundParam;
		ProcessEvent(FindFunctionChecked(NAME_AELSSRoundManager_OnEndRound),&Parms);
	}
	static FName NAME_AELSSRoundManager_OnTickRound = FName(TEXT("OnTickRound"));
	void AELSSRoundManager::OnTickRound(FSSRoundParam const& inRoundParam, float inNewRoundTime, float inPrevRoundTime)
	{
		ELSSRoundManager_eventOnTickRound_Parms Parms;
		Parms.inRoundParam=inRoundParam;
		Parms.inNewRoundTime=inNewRoundTime;
		Parms.inPrevRoundTime=inPrevRoundTime;
		ProcessEvent(FindFunctionChecked(NAME_AELSSRoundManager_OnTickRound),&Parms);
	}
	void AELSSRoundManager::StaticRegisterNativesAELSSRoundManager()
	{
		UClass* Class = AELSSRoundManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentRound", &AELSSRoundManager::execGetCurrentRound },
			{ "GetStorm", &AELSSRoundManager::execGetStorm },
			{ "IsRoundFinal", &AELSSRoundManager::execIsRoundFinal },
			{ "OnBeginRound", &AELSSRoundManager::execOnBeginRound },
			{ "OnEndRound", &AELSSRoundManager::execOnEndRound },
			{ "OnRep_ElapsedTime", &AELSSRoundManager::execOnRep_ElapsedTime },
			{ "OnRep_RoundTotalTime", &AELSSRoundManager::execOnRep_RoundTotalTime },
			{ "OnTickRound", &AELSSRoundManager::execOnTickRound },
			{ "SetUIManagerActor", &AELSSRoundManager::execSetUIManagerActor },
			{ "StartReadyState", &AELSSRoundManager::execStartReadyState },
			{ "StartRound0", &AELSSRoundManager::execStartRound0 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics
	{
		struct ELSSRoundManager_eventGetCurrentRound_Parms
		{
			ESSRound ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRoundManager_eventGetCurrentRound_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSRound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "GetCurrentRound", nullptr, nullptr, sizeof(ELSSRoundManager_eventGetCurrentRound_Parms), Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics
	{
		struct ELSSRoundManager_eventGetStorm_Parms
		{
			AELSSStorm* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRoundManager_eventGetStorm_Parms, ReturnValue), Z_Construct_UClass_AELSSStorm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "GetStorm", nullptr, nullptr, sizeof(ELSSRoundManager_eventGetStorm_Parms), Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_GetStorm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_GetStorm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_InitializeRoundParamArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_InitializeRoundParamArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_InitializeRoundParamArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "InitializeRoundParamArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_InitializeRoundParamArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_InitializeRoundParamArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_InitializeRoundParamArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_InitializeRoundParamArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics
	{
		struct ELSSRoundManager_eventIsRoundFinal_Parms
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
	void Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSRoundManager_eventIsRoundFinal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSRoundManager_eventIsRoundFinal_Parms), &Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "IsRoundFinal", nullptr, nullptr, sizeof(ELSSRoundManager_eventIsRoundFinal_Parms), Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRoundManager_eventOnBeginRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::NewProp_inRoundParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "OnBeginRound", nullptr, nullptr, sizeof(ELSSRoundManager_eventOnBeginRound_Parms), Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_OnBeginRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_OnBeginRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRoundManager_eventOnEndRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::NewProp_inRoundParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "OnEndRound", nullptr, nullptr, sizeof(ELSSRoundManager_eventOnEndRound_Parms), Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_OnEndRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_OnEndRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_OnRep_ElapsedTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_OnRep_ElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_OnRep_ElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "OnRep_ElapsedTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_OnRep_ElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnRep_ElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_OnRep_ElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_OnRep_ElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_OnRep_RoundTotalTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_OnRep_RoundTotalTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_OnRep_RoundTotalTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "OnRep_RoundTotalTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_OnRep_RoundTotalTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnRep_RoundTotalTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_OnRep_RoundTotalTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_OnRep_RoundTotalTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inNewRoundTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inPrevRoundTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRoundManager_eventOnTickRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inNewRoundTime = { "inNewRoundTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRoundManager_eventOnTickRound_Parms, inNewRoundTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inPrevRoundTime = { "inPrevRoundTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRoundManager_eventOnTickRound_Parms, inPrevRoundTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inRoundParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inNewRoundTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::NewProp_inPrevRoundTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "OnTickRound", nullptr, nullptr, sizeof(ELSSRoundManager_eventOnTickRound_Parms), Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_OnTickRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_OnTickRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics
	{
		struct ELSSRoundManager_eventSetUIManagerActor_Parms
		{
			AActor* InActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRoundManager_eventSetUIManagerActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "SetUIManagerActor", nullptr, nullptr, sizeof(ELSSRoundManager_eventSetUIManagerActor_Parms), Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_StartReadyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_StartReadyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_StartReadyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "StartReadyState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_StartReadyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_StartReadyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_StartReadyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_StartReadyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSRoundManager_StartRound0_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSRoundManager_StartRound0_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSRoundManager_StartRound0_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSRoundManager, nullptr, "StartRound0", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSRoundManager_StartRound0_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSRoundManager_StartRound0_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSRoundManager_StartRound0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSRoundManager_StartRound0_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSRoundManager_NoRegister()
	{
		return AELSSRoundManager::StaticClass();
	}
	struct Z_Construct_UClass_AELSSRoundManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnBeginRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnBeginRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnEndRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnEndRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventOnTickRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventOnTickRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StormActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StormActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StormRandomSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StormRandomSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTimeRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTimeRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTimeLocal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTimeLocal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundTotalTimeRep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundTotalTimeRep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundTotalTimeLocal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundTotalTimeLocal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRoundParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoundIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentRoundIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RoundState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundBeginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundBeginTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoundParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoundParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdjustParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIManagerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIManagerActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSRoundManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSRoundManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSRoundManager_GetCurrentRound, "GetCurrentRound" }, // 3938606194
		{ &Z_Construct_UFunction_AELSSRoundManager_GetStorm, "GetStorm" }, // 367902220
		{ &Z_Construct_UFunction_AELSSRoundManager_InitializeRoundParamArray, "InitializeRoundParamArray" }, // 866442090
		{ &Z_Construct_UFunction_AELSSRoundManager_IsRoundFinal, "IsRoundFinal" }, // 404430890
		{ &Z_Construct_UFunction_AELSSRoundManager_OnBeginRound, "OnBeginRound" }, // 1865435164
		{ &Z_Construct_UFunction_AELSSRoundManager_OnEndRound, "OnEndRound" }, // 1496863834
		{ &Z_Construct_UFunction_AELSSRoundManager_OnRep_ElapsedTime, "OnRep_ElapsedTime" }, // 549569024
		{ &Z_Construct_UFunction_AELSSRoundManager_OnRep_RoundTotalTime, "OnRep_RoundTotalTime" }, // 3017552956
		{ &Z_Construct_UFunction_AELSSRoundManager_OnTickRound, "OnTickRound" }, // 294438856
		{ &Z_Construct_UFunction_AELSSRoundManager_SetUIManagerActor, "SetUIManagerActor" }, // 3197474234
		{ &Z_Construct_UFunction_AELSSRoundManager_StartReadyState, "StartReadyState" }, // 529573252
		{ &Z_Construct_UFunction_AELSSRoundManager_StartRound0, "StartRound0" }, // 4036273945
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSRoundManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnBeginRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnBeginRound = { "EventOnBeginRound", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, EventOnBeginRound), Z_Construct_UDelegateFunction_ABP_200508_SSRoundEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnBeginRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnBeginRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnEndRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnEndRound = { "EventOnEndRound", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, EventOnEndRound), Z_Construct_UDelegateFunction_ABP_200508_SSRoundEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnEndRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnEndRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnTickRound_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnTickRound = { "EventOnTickRound", nullptr, (EPropertyFlags)0x0020080010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, EventOnTickRound), Z_Construct_UDelegateFunction_ABP_200508_SSRoundOnTickEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnTickRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnTickRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActor = { "StormActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, StormActor), Z_Construct_UClass_AELSSStorm_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActorClass = { "StormActorClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, StormActorClass), Z_Construct_UClass_AELSSStorm_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormRandomSeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormRandomSeed = { "StormRandomSeed", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, StormRandomSeed), METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormRandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormRandomSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeRep = { "ElapsedTimeRep", "OnRep_ElapsedTime", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, ElapsedTimeRep), METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeLocal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeLocal = { "ElapsedTimeLocal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, ElapsedTimeLocal), METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeLocal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeRep_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeRep = { "RoundTotalTimeRep", "OnRep_RoundTotalTime", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, RoundTotalTimeRep), METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeRep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeRep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeLocal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeLocal = { "RoundTotalTimeLocal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, RoundTotalTimeLocal), METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeLocal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundParam = { "CurrentRoundParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, CurrentRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundIndex = { "CurrentRoundIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, CurrentRoundIndex), METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundIndex_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundState = { "RoundState", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, RoundState), Z_Construct_UEnum_ABP_200508_ESSRoundState, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundBeginTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundBeginTime = { "RoundBeginTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, RoundBeginTime), METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundBeginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundBeginTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundParams_Inner = { "RoundParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundParams = { "RoundParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, RoundParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_AdjustParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_AdjustParam = { "AdjustParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, AdjustParam), Z_Construct_UScriptStruct_FSSRoundAdjustParam, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_AdjustParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_AdjustParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundSpeed = { "RoundSpeed", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, RoundSpeed), METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_UIManagerActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRoundManager" },
		{ "ModuleRelativePath", "Public/ELSSRoundManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_UIManagerActor = { "UIManagerActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSRoundManager, UIManagerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_UIManagerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_UIManagerActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSRoundManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnBeginRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnEndRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_EventOnTickRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_StormRandomSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_ElapsedTimeLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeRep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundTotalTimeLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_CurrentRoundIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundBeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_AdjustParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_RoundSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSRoundManager_Statics::NewProp_UIManagerActor,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSRoundManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSManagerActorInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSRoundManager, IELSSManagerActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSRoundManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSRoundManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSRoundManager_Statics::ClassParams = {
		&AELSSRoundManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSRoundManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSRoundManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSRoundManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSRoundManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSRoundManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSRoundManager, 3840087944);
	template<> ABP_200508_API UClass* StaticClass<AELSSRoundManager>()
	{
		return AELSSRoundManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSRoundManager(Z_Construct_UClass_AELSSRoundManager, &AELSSRoundManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSRoundManager"), false, nullptr, nullptr, nullptr);

	void AELSSRoundManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StormRandomSeed(TEXT("StormRandomSeed"));
		static const FName Name_ElapsedTimeRep(TEXT("ElapsedTimeRep"));
		static const FName Name_RoundTotalTimeRep(TEXT("RoundTotalTimeRep"));
		static const FName Name_RoundSpeed(TEXT("RoundSpeed"));

		const bool bIsValid = true
			&& Name_StormRandomSeed == ClassReps[(int32)ENetFields_Private::StormRandomSeed].Property->GetFName()
			&& Name_ElapsedTimeRep == ClassReps[(int32)ENetFields_Private::ElapsedTimeRep].Property->GetFName()
			&& Name_RoundTotalTimeRep == ClassReps[(int32)ENetFields_Private::RoundTotalTimeRep].Property->GetFName()
			&& Name_RoundSpeed == ClassReps[(int32)ENetFields_Private::RoundSpeed].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSRoundManager"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSRoundManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
