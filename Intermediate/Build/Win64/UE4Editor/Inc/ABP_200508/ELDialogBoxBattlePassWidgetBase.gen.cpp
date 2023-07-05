// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDialogBoxBattlePassWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDialogBoxBattlePassWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLevelProgressRateParam();
// End Cross Module References
	DEFINE_FUNCTION(UELDialogBoxBattlePassWidgetBase::execEndDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDialogBoxBattlePassWidgetBase::execGetLevelProgressRateParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_UBOOL_REF(Z_Param_Out__findParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLevelProgressRateParam*)Z_Param__Result=P_THIS->GetLevelProgressRateParam(Z_Param__Index,Z_Param_Out__findParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDialogBoxBattlePassWidgetBase::execGetProgressRateNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetProgressRateNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDialogBoxBattlePassWidgetBase::execOnUpdateBattlePassPoint)
	{
		P_GET_UBOOL(Z_Param__Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateBattlePassPoint(Z_Param__Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELDialogBoxBattlePassWidgetBase::execSetup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__addPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup(Z_Param__addPoint);
		P_NATIVE_END;
	}
	static FName NAME_UELDialogBoxBattlePassWidgetBase_OnDecideMenu = FName(TEXT("OnDecideMenu"));
	void UELDialogBoxBattlePassWidgetBase::OnDecideMenu()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxBattlePassWidgetBase_OnDecideMenu),NULL);
	}
	static FName NAME_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog = FName(TEXT("OnForceEndDialog"));
	void UELDialogBoxBattlePassWidgetBase::OnForceEndDialog()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog),NULL);
	}
	void UELDialogBoxBattlePassWidgetBase::StaticRegisterNativesUELDialogBoxBattlePassWidgetBase()
	{
		UClass* Class = UELDialogBoxBattlePassWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndDialog", &UELDialogBoxBattlePassWidgetBase::execEndDialog },
			{ "GetLevelProgressRateParam", &UELDialogBoxBattlePassWidgetBase::execGetLevelProgressRateParam },
			{ "GetProgressRateNum", &UELDialogBoxBattlePassWidgetBase::execGetProgressRateNum },
			{ "OnUpdateBattlePassPoint", &UELDialogBoxBattlePassWidgetBase::execOnUpdateBattlePassPoint },
			{ "Setup", &UELDialogBoxBattlePassWidgetBase::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_EndDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_EndDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxBattlePassWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_EndDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase, nullptr, "EndDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_EndDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_EndDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_EndDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_EndDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics
	{
		struct ELDialogBoxBattlePassWidgetBase_eventGetLevelProgressRateParam_Parms
		{
			int32 _Index;
			bool _findParam;
			FLevelProgressRateParam ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static void NewProp__findParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__findParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxBattlePassWidgetBase_eventGetLevelProgressRateParam_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::NewProp__findParam_SetBit(void* Obj)
	{
		((ELDialogBoxBattlePassWidgetBase_eventGetLevelProgressRateParam_Parms*)Obj)->_findParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::NewProp__findParam = { "_findParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxBattlePassWidgetBase_eventGetLevelProgressRateParam_Parms), &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::NewProp__findParam_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxBattlePassWidgetBase_eventGetLevelProgressRateParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FLevelProgressRateParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::NewProp__findParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxBattlePassWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase, nullptr, "GetLevelProgressRateParam", nullptr, nullptr, sizeof(ELDialogBoxBattlePassWidgetBase_eventGetLevelProgressRateParam_Parms), Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics
	{
		struct ELDialogBoxBattlePassWidgetBase_eventGetProgressRateNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxBattlePassWidgetBase_eventGetProgressRateNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxBattlePassWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase, nullptr, "GetProgressRateNum", nullptr, nullptr, sizeof(ELDialogBoxBattlePassWidgetBase_eventGetProgressRateNum_Parms), Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnDecideMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnDecideMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxBattlePassWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnDecideMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase, nullptr, "OnDecideMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnDecideMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnDecideMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnDecideMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnDecideMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxBattlePassWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase, nullptr, "OnForceEndDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics
	{
		struct ELDialogBoxBattlePassWidgetBase_eventOnUpdateBattlePassPoint_Parms
		{
			bool _Successed;
		};
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELDialogBoxBattlePassWidgetBase_eventOnUpdateBattlePassPoint_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELDialogBoxBattlePassWidgetBase_eventOnUpdateBattlePassPoint_Parms), &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::NewProp__Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxBattlePassWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase, nullptr, "OnUpdateBattlePassPoint", nullptr, nullptr, sizeof(ELDialogBoxBattlePassWidgetBase_eventOnUpdateBattlePassPoint_Parms), Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics
	{
		struct ELDialogBoxBattlePassWidgetBase_eventSetup_Parms
		{
			int32 _addPoint;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__addPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::NewProp__addPoint = { "_addPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELDialogBoxBattlePassWidgetBase_eventSetup_Parms, _addPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::NewProp__addPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELDialogBoxBattlePassWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase, nullptr, "Setup", nullptr, nullptr, sizeof(ELDialogBoxBattlePassWidgetBase_eventSetup_Parms), Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_NoRegister()
	{
		return UELDialogBoxBattlePassWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_EndDialog, "EndDialog" }, // 4247409673
		{ &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetLevelProgressRateParam, "GetLevelProgressRateParam" }, // 3095191199
		{ &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_GetProgressRateNum, "GetProgressRateNum" }, // 1438230794
		{ &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnDecideMenu, "OnDecideMenu" }, // 1907233590
		{ &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnForceEndDialog, "OnForceEndDialog" }, // 343783186
		{ &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_OnUpdateBattlePassPoint, "OnUpdateBattlePassPoint" }, // 2977246954
		{ &Z_Construct_UFunction_UELDialogBoxBattlePassWidgetBase_Setup, "Setup" }, // 1014942623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDialogBoxBattlePassWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDialogBoxBattlePassWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDialogBoxBattlePassWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics::ClassParams = {
		&UELDialogBoxBattlePassWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDialogBoxBattlePassWidgetBase, 1525384539);
	template<> ABP_200508_API UClass* StaticClass<UELDialogBoxBattlePassWidgetBase>()
	{
		return UELDialogBoxBattlePassWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDialogBoxBattlePassWidgetBase(Z_Construct_UClass_UELDialogBoxBattlePassWidgetBase, &UELDialogBoxBattlePassWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDialogBoxBattlePassWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDialogBoxBattlePassWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
