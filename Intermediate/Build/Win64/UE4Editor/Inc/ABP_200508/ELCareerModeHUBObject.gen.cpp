// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerModeHUBObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerModeHUBObject() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerModeHUBObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerModeHUBObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerModeHUBObject::execClearGlobalCareerParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearGlobalCareerParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execClearStoryCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearStoryCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execExecNoTransitionScript)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecNoTransitionScript();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execGetOperationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerStoryOperationType*)Z_Param__Result=P_THIS->GetOperationType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execGetReverbNameTransitionLevel)
	{
		P_GET_OBJECT(UELGameInstance,Z_Param__pGameInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetReverbNameTransitionLevel(Z_Param__pGameInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execIsStopBGM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStopBGM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execReceiveCAWMenuParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveCAWMenuParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execSetupCareerEventMemberID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCareerEventMemberID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execSetupCAWMenuParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCAWMenuParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execSetupCutsceneParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCutsceneParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execSetupMovieSceneParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMovieSceneParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execSetupStockStoryCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupStockStoryCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execSetupTransitionLevelInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupTransitionLevelInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execUpdateStoryByMatchResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStoryByMatchResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execUpdateStoryWithScriptResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStoryWithScriptResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerModeHUBObject::execUpdateUseTableInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateUseTableInfo();
		P_NATIVE_END;
	}
	void AELCareerModeHUBObject::StaticRegisterNativesAELCareerModeHUBObject()
	{
		UClass* Class = AELCareerModeHUBObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearGlobalCareerParams", &AELCareerModeHUBObject::execClearGlobalCareerParams },
			{ "ClearStoryCard", &AELCareerModeHUBObject::execClearStoryCard },
			{ "ExecNoTransitionScript", &AELCareerModeHUBObject::execExecNoTransitionScript },
			{ "GetOperationType", &AELCareerModeHUBObject::execGetOperationType },
			{ "GetReverbNameTransitionLevel", &AELCareerModeHUBObject::execGetReverbNameTransitionLevel },
			{ "IsStopBGM", &AELCareerModeHUBObject::execIsStopBGM },
			{ "ReceiveCAWMenuParam", &AELCareerModeHUBObject::execReceiveCAWMenuParam },
			{ "SetupCareerEventMemberID", &AELCareerModeHUBObject::execSetupCareerEventMemberID },
			{ "SetupCAWMenuParam", &AELCareerModeHUBObject::execSetupCAWMenuParam },
			{ "SetupCutsceneParam", &AELCareerModeHUBObject::execSetupCutsceneParam },
			{ "SetupMovieSceneParam", &AELCareerModeHUBObject::execSetupMovieSceneParam },
			{ "SetupStockStoryCard", &AELCareerModeHUBObject::execSetupStockStoryCard },
			{ "SetupTransitionLevelInfo", &AELCareerModeHUBObject::execSetupTransitionLevelInfo },
			{ "UpdateStoryByMatchResult", &AELCareerModeHUBObject::execUpdateStoryByMatchResult },
			{ "UpdateStoryWithScriptResult", &AELCareerModeHUBObject::execUpdateStoryWithScriptResult },
			{ "UpdateUseTableInfo", &AELCareerModeHUBObject::execUpdateUseTableInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_ClearGlobalCareerParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_ClearGlobalCareerParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_ClearGlobalCareerParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "ClearGlobalCareerParams", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_ClearGlobalCareerParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_ClearGlobalCareerParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_ClearGlobalCareerParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_ClearGlobalCareerParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_ClearStoryCard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_ClearStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_ClearStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "ClearStoryCard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_ClearStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_ClearStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_ClearStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_ClearStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_ExecNoTransitionScript_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_ExecNoTransitionScript_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_ExecNoTransitionScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "ExecNoTransitionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_ExecNoTransitionScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_ExecNoTransitionScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_ExecNoTransitionScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_ExecNoTransitionScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics
	{
		struct ELCareerModeHUBObject_eventGetOperationType_Parms
		{
			ECareerStoryOperationType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerModeHUBObject_eventGetOperationType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "GetOperationType", nullptr, nullptr, sizeof(ELCareerModeHUBObject_eventGetOperationType_Parms), Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics
	{
		struct ELCareerModeHUBObject_eventGetReverbNameTransitionLevel_Parms
		{
			UELGameInstance* _pGameInstance;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pGameInstance;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::NewProp__pGameInstance = { "_pGameInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerModeHUBObject_eventGetReverbNameTransitionLevel_Parms, _pGameInstance), Z_Construct_UClass_UELGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerModeHUBObject_eventGetReverbNameTransitionLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::NewProp__pGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "GetReverbNameTransitionLevel", nullptr, nullptr, sizeof(ELCareerModeHUBObject_eventGetReverbNameTransitionLevel_Parms), Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics
	{
		struct ELCareerModeHUBObject_eventIsStopBGM_Parms
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
	void Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerModeHUBObject_eventIsStopBGM_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerModeHUBObject_eventIsStopBGM_Parms), &Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "IsStopBGM", nullptr, nullptr, sizeof(ELCareerModeHUBObject_eventIsStopBGM_Parms), Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_ReceiveCAWMenuParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_ReceiveCAWMenuParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_ReceiveCAWMenuParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "ReceiveCAWMenuParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_ReceiveCAWMenuParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_ReceiveCAWMenuParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_ReceiveCAWMenuParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_ReceiveCAWMenuParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_SetupCareerEventMemberID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_SetupCareerEventMemberID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_SetupCareerEventMemberID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "SetupCareerEventMemberID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_SetupCareerEventMemberID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_SetupCareerEventMemberID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_SetupCareerEventMemberID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_SetupCareerEventMemberID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_SetupCAWMenuParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_SetupCAWMenuParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_SetupCAWMenuParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "SetupCAWMenuParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_SetupCAWMenuParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_SetupCAWMenuParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_SetupCAWMenuParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_SetupCAWMenuParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_SetupCutsceneParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_SetupCutsceneParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_SetupCutsceneParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "SetupCutsceneParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_SetupCutsceneParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_SetupCutsceneParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_SetupCutsceneParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_SetupCutsceneParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_SetupMovieSceneParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_SetupMovieSceneParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_SetupMovieSceneParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "SetupMovieSceneParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_SetupMovieSceneParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_SetupMovieSceneParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_SetupMovieSceneParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_SetupMovieSceneParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics
	{
		struct ELCareerModeHUBObject_eventSetupStockStoryCard_Parms
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
	void Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerModeHUBObject_eventSetupStockStoryCard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerModeHUBObject_eventSetupStockStoryCard_Parms), &Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "SetupStockStoryCard", nullptr, nullptr, sizeof(ELCareerModeHUBObject_eventSetupStockStoryCard_Parms), Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_SetupTransitionLevelInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_SetupTransitionLevelInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_SetupTransitionLevelInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "SetupTransitionLevelInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_SetupTransitionLevelInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_SetupTransitionLevelInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_SetupTransitionLevelInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_SetupTransitionLevelInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryByMatchResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryByMatchResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryByMatchResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "UpdateStoryByMatchResult", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryByMatchResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryByMatchResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryByMatchResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryByMatchResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryWithScriptResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryWithScriptResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryWithScriptResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "UpdateStoryWithScriptResult", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryWithScriptResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryWithScriptResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryWithScriptResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryWithScriptResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerModeHUBObject_UpdateUseTableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerModeHUBObject_UpdateUseTableInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerModeHUBObject_UpdateUseTableInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerModeHUBObject, nullptr, "UpdateUseTableInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerModeHUBObject_UpdateUseTableInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerModeHUBObject_UpdateUseTableInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerModeHUBObject_UpdateUseTableInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerModeHUBObject_UpdateUseTableInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerModeHUBObject_NoRegister()
	{
		return AELCareerModeHUBObject::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerModeHUBObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerModeHUBObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerModeHUBObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_ClearGlobalCareerParams, "ClearGlobalCareerParams" }, // 3701753637
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_ClearStoryCard, "ClearStoryCard" }, // 399475215
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_ExecNoTransitionScript, "ExecNoTransitionScript" }, // 2406695741
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_GetOperationType, "GetOperationType" }, // 1203016314
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_GetReverbNameTransitionLevel, "GetReverbNameTransitionLevel" }, // 2082658904
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_IsStopBGM, "IsStopBGM" }, // 3659786128
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_ReceiveCAWMenuParam, "ReceiveCAWMenuParam" }, // 1965562758
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_SetupCareerEventMemberID, "SetupCareerEventMemberID" }, // 392727814
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_SetupCAWMenuParam, "SetupCAWMenuParam" }, // 1612582838
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_SetupCutsceneParam, "SetupCutsceneParam" }, // 4031729218
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_SetupMovieSceneParam, "SetupMovieSceneParam" }, // 362443950
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_SetupStockStoryCard, "SetupStockStoryCard" }, // 3850836358
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_SetupTransitionLevelInfo, "SetupTransitionLevelInfo" }, // 2947755423
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryByMatchResult, "UpdateStoryByMatchResult" }, // 3112868736
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_UpdateStoryWithScriptResult, "UpdateStoryWithScriptResult" }, // 461543680
		{ &Z_Construct_UFunction_AELCareerModeHUBObject_UpdateUseTableInfo, "UpdateUseTableInfo" }, // 3663045753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerModeHUBObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerModeHUBObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerModeHUBObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerModeHUBObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerModeHUBObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerModeHUBObject_Statics::ClassParams = {
		&AELCareerModeHUBObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AELCareerModeHUBObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerModeHUBObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerModeHUBObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerModeHUBObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerModeHUBObject, 3511531897);
	template<> ABP_200508_API UClass* StaticClass<AELCareerModeHUBObject>()
	{
		return AELCareerModeHUBObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerModeHUBObject(Z_Construct_UClass_AELCareerModeHUBObject, &AELCareerModeHUBObject::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerModeHUBObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerModeHUBObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
