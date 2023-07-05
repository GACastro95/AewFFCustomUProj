// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSFadeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSFadeManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSFadeManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSFadeManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_AELSSFadeManager_CreateSimpleFade = FName(TEXT("CreateSimpleFade"));
	bool AELSSFadeManager::CreateSimpleFade()
	{
		ELSSFadeManager_eventCreateSimpleFade_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSFadeManager_CreateSimpleFade),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSFadeManager_DestroySimpleFade = FName(TEXT("DestroySimpleFade"));
	bool AELSSFadeManager::DestroySimpleFade()
	{
		ELSSFadeManager_eventDestroySimpleFade_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSFadeManager_DestroySimpleFade),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSFadeManager_GetSimpleFadeState = FName(TEXT("GetSimpleFadeState"));
	void AELSSFadeManager::GetSimpleFadeState(bool& outIsFadeIn, bool& outFadeCompleted)
	{
		ELSSFadeManager_eventGetSimpleFadeState_Parms Parms;
		Parms.outIsFadeIn=outIsFadeIn ? true : false;
		Parms.outFadeCompleted=outFadeCompleted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AELSSFadeManager_GetSimpleFadeState),&Parms);
		outIsFadeIn=Parms.outIsFadeIn;
		outFadeCompleted=Parms.outFadeCompleted;
	}
	static FName NAME_AELSSFadeManager_IsDoneSimpleFade = FName(TEXT("IsDoneSimpleFade"));
	bool AELSSFadeManager::IsDoneSimpleFade() const
	{
		ELSSFadeManager_eventIsDoneSimpleFade_Parms Parms;
		const_cast<AELSSFadeManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELSSFadeManager_IsDoneSimpleFade),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELSSFadeManager_SimpleFadeIn = FName(TEXT("SimpleFadeIn"));
	float AELSSFadeManager::SimpleFadeIn(float InDuration)
	{
		ELSSFadeManager_eventSimpleFadeIn_Parms Parms;
		Parms.InDuration=InDuration;
		ProcessEvent(FindFunctionChecked(NAME_AELSSFadeManager_SimpleFadeIn),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSFadeManager_SimpleFadeOut = FName(TEXT("SimpleFadeOut"));
	float AELSSFadeManager::SimpleFadeOut(float InDuration)
	{
		ELSSFadeManager_eventSimpleFadeOut_Parms Parms;
		Parms.InDuration=InDuration;
		ProcessEvent(FindFunctionChecked(NAME_AELSSFadeManager_SimpleFadeOut),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AELSSFadeManager_SimpleFadeReady = FName(TEXT("SimpleFadeReady"));
	bool AELSSFadeManager::SimpleFadeReady()
	{
		ELSSFadeManager_eventSimpleFadeReady_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AELSSFadeManager_SimpleFadeReady),&Parms);
		return !!Parms.ReturnValue;
	}
	void AELSSFadeManager::StaticRegisterNativesAELSSFadeManager()
	{
	}
	struct Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSFadeManager_eventCreateSimpleFade_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSFadeManager_eventCreateSimpleFade_Parms), &Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSFadeManager, nullptr, "CreateSimpleFade", nullptr, nullptr, sizeof(ELSSFadeManager_eventCreateSimpleFade_Parms), Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSFadeManager_eventDestroySimpleFade_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSFadeManager_eventDestroySimpleFade_Parms), &Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSFadeManager, nullptr, "DestroySimpleFade", nullptr, nullptr, sizeof(ELSSFadeManager_eventDestroySimpleFade_Parms), Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics
	{
		static void NewProp_outIsFadeIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_outIsFadeIn;
		static void NewProp_outFadeCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_outFadeCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::NewProp_outIsFadeIn_SetBit(void* Obj)
	{
		((ELSSFadeManager_eventGetSimpleFadeState_Parms*)Obj)->outIsFadeIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::NewProp_outIsFadeIn = { "outIsFadeIn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSFadeManager_eventGetSimpleFadeState_Parms), &Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::NewProp_outIsFadeIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::NewProp_outFadeCompleted_SetBit(void* Obj)
	{
		((ELSSFadeManager_eventGetSimpleFadeState_Parms*)Obj)->outFadeCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::NewProp_outFadeCompleted = { "outFadeCompleted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSFadeManager_eventGetSimpleFadeState_Parms), &Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::NewProp_outFadeCompleted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::NewProp_outIsFadeIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::NewProp_outFadeCompleted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSFadeManager, nullptr, "GetSimpleFadeState", nullptr, nullptr, sizeof(ELSSFadeManager_eventGetSimpleFadeState_Parms), Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSFadeManager_eventIsDoneSimpleFade_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSFadeManager_eventIsDoneSimpleFade_Parms), &Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSFadeManager, nullptr, "IsDoneSimpleFade", nullptr, nullptr, sizeof(ELSSFadeManager_eventIsDoneSimpleFade_Parms), Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFadeManager_eventSimpleFadeIn_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFadeManager_eventSimpleFadeIn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::NewProp_InDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSFadeManager, nullptr, "SimpleFadeIn", nullptr, nullptr, sizeof(ELSSFadeManager_eventSimpleFadeIn_Parms), Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDuration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::NewProp_InDuration = { "InDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFadeManager_eventSimpleFadeOut_Parms, InDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSFadeManager_eventSimpleFadeOut_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::NewProp_InDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSFadeManager, nullptr, "SimpleFadeOut", nullptr, nullptr, sizeof(ELSSFadeManager_eventSimpleFadeOut_Parms), Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSFadeManager_eventSimpleFadeReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSFadeManager_eventSimpleFadeReady_Parms), &Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSFadeManager, nullptr, "SimpleFadeReady", nullptr, nullptr, sizeof(ELSSFadeManager_eventSimpleFadeReady_Parms), Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSFadeManager_NoRegister()
	{
		return AELSSFadeManager::StaticClass();
	}
	struct Z_Construct_UClass_AELSSFadeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleFadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SimpleFadeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSFadeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSFadeManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSFadeManager_CreateSimpleFade, "CreateSimpleFade" }, // 1537319029
		{ &Z_Construct_UFunction_AELSSFadeManager_DestroySimpleFade, "DestroySimpleFade" }, // 2630362557
		{ &Z_Construct_UFunction_AELSSFadeManager_GetSimpleFadeState, "GetSimpleFadeState" }, // 3415582014
		{ &Z_Construct_UFunction_AELSSFadeManager_IsDoneSimpleFade, "IsDoneSimpleFade" }, // 1261427854
		{ &Z_Construct_UFunction_AELSSFadeManager_SimpleFadeIn, "SimpleFadeIn" }, // 1090490296
		{ &Z_Construct_UFunction_AELSSFadeManager_SimpleFadeOut, "SimpleFadeOut" }, // 3417643836
		{ &Z_Construct_UFunction_AELSSFadeManager_SimpleFadeReady, "SimpleFadeReady" }, // 3987346762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSFadeManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSFadeManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSFadeManager_Statics::NewProp_SimpleFadeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSFadeManager" },
		{ "ModuleRelativePath", "Public/ELSSFadeManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSFadeManager_Statics::NewProp_SimpleFadeTime = { "SimpleFadeTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSFadeManager, SimpleFadeTime), METADATA_PARAMS(Z_Construct_UClass_AELSSFadeManager_Statics::NewProp_SimpleFadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSFadeManager_Statics::NewProp_SimpleFadeTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSFadeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSFadeManager_Statics::NewProp_SimpleFadeTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSFadeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSFadeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSFadeManager_Statics::ClassParams = {
		&AELSSFadeManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSFadeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSFadeManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSFadeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSFadeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSFadeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSFadeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSFadeManager, 1142757577);
	template<> ABP_200508_API UClass* StaticClass<AELSSFadeManager>()
	{
		return AELSSFadeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSFadeManager(Z_Construct_UClass_AELSSFadeManager, &AELSSFadeManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSFadeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSFadeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
