// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerStateManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerStateManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerStateManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerStateManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuWidgetBase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerResultData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerDialogType();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameInstance_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerStateManager::execCheckMatchOperationFromWidget)
	{
		P_GET_OBJECT(UELMenuWidgetBase,Z_Param_pWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckMatchOperationFromWidget(Z_Param_pWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStateManager::execCheckState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__WidgetOperationResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckState(Z_Param__WidgetOperationResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStateManager::execCheckState_Cancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckState_Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStateManager::execGetCareerResultData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Score);
		P_GET_STRUCT_REF(FCareerResultData,Z_Param_Out__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerResultData(Z_Param__Score,Z_Param_Out__Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerStateManager::execIsSchedule_Ending)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSchedule_Ending();
		P_NATIVE_END;
	}
	static FName NAME_AELCareerStateManager_OpenDialog_ItemGet = FName(TEXT("OpenDialog_ItemGet"));
	void AELCareerStateManager::OpenDialog_ItemGet(TSoftObjectPtr<UTexture2D> const& Texture, FName HeaderText, FName InformationText, ECareerDialogType ECareerDialogType, int32 InfomationParam)
	{
		ELCareerStateManager_eventOpenDialog_ItemGet_Parms Parms;
		Parms.Texture=Texture;
		Parms.HeaderText=HeaderText;
		Parms.InformationText=InformationText;
		Parms.ECareerDialogType=ECareerDialogType;
		Parms.InfomationParam=InfomationParam;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerStateManager_OpenDialog_ItemGet),&Parms);
	}
	static FName NAME_AELCareerStateManager_OpenDialog_Message = FName(TEXT("OpenDialog_Message"));
	void AELCareerStateManager::OpenDialog_Message(FName InformationText)
	{
		ELCareerStateManager_eventOpenDialog_Message_Parms Parms;
		Parms.InformationText=InformationText;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerStateManager_OpenDialog_Message),&Parms);
	}
	static FName NAME_AELCareerStateManager_OpenDialog_Tutorial = FName(TEXT("OpenDialog_Tutorial"));
	void AELCareerStateManager::OpenDialog_Tutorial(FName DispTutorial)
	{
		ELCareerStateManager_eventOpenDialog_Tutorial_Parms Parms;
		Parms.DispTutorial=DispTutorial;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerStateManager_OpenDialog_Tutorial),&Parms);
	}
	static FName NAME_AELCareerStateManager_OpenDialog_YesNo = FName(TEXT("OpenDialog_YesNo"));
	void AELCareerStateManager::OpenDialog_YesNo(ECareerDialogType ECareerDialogType)
	{
		ELCareerStateManager_eventOpenDialog_YesNo_Parms Parms;
		Parms.ECareerDialogType=ECareerDialogType;
		ProcessEvent(FindFunctionChecked(NAME_AELCareerStateManager_OpenDialog_YesNo),&Parms);
	}
	static FName NAME_AELCareerStateManager_OpenTutorialArchive = FName(TEXT("OpenTutorialArchive"));
	void AELCareerStateManager::OpenTutorialArchive()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELCareerStateManager_OpenTutorialArchive),NULL);
	}
	void AELCareerStateManager::StaticRegisterNativesAELCareerStateManager()
	{
		UClass* Class = AELCareerStateManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckMatchOperationFromWidget", &AELCareerStateManager::execCheckMatchOperationFromWidget },
			{ "CheckState", &AELCareerStateManager::execCheckState },
			{ "CheckState_Cancel", &AELCareerStateManager::execCheckState_Cancel },
			{ "GetCareerResultData", &AELCareerStateManager::execGetCareerResultData },
			{ "IsSchedule_Ending", &AELCareerStateManager::execIsSchedule_Ending },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics
	{
		struct ELCareerStateManager_eventCheckMatchOperationFromWidget_Parms
		{
			UELMenuWidgetBase* pWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::NewProp_pWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::NewProp_pWidget = { "pWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventCheckMatchOperationFromWidget_Parms, pWidget), Z_Construct_UClass_UELMenuWidgetBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::NewProp_pWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::NewProp_pWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::NewProp_pWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "CheckMatchOperationFromWidget", nullptr, nullptr, sizeof(ELCareerStateManager_eventCheckMatchOperationFromWidget_Parms), Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics
	{
		struct ELCareerStateManager_eventCheckState_Parms
		{
			int32 _WidgetOperationResult;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__WidgetOperationResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::NewProp__WidgetOperationResult = { "_WidgetOperationResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventCheckState_Parms, _WidgetOperationResult), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::NewProp__WidgetOperationResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "CheckState", nullptr, nullptr, sizeof(ELCareerStateManager_eventCheckState_Parms), Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_CheckState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_CheckState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_CheckState_Cancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_CheckState_Cancel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_CheckState_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "CheckState_Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_CheckState_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_CheckState_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_CheckState_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_CheckState_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics
	{
		struct ELCareerStateManager_eventGetCareerResultData_Parms
		{
			int32 _Score;
			FCareerResultData _Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Score;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp__Score_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp__Score = { "_Score", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventGetCareerResultData_Parms, _Score), METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp__Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp__Score_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventGetCareerResultData_Parms, _Data), Z_Construct_UScriptStruct_FCareerResultData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerStateManager_eventGetCareerResultData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStateManager_eventGetCareerResultData_Parms), &Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp__Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp__Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "GetCareerResultData", nullptr, nullptr, sizeof(ELCareerStateManager_eventGetCareerResultData_Parms), Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics
	{
		struct ELCareerStateManager_eventIsSchedule_Ending_Parms
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
	void Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerStateManager_eventIsSchedule_Ending_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerStateManager_eventIsSchedule_Ending_Parms), &Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "IsSchedule_Ending", nullptr, nullptr, sizeof(ELCareerStateManager_eventIsSchedule_Ending_Parms), Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeaderText;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InformationText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ECareerDialogType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ECareerDialogType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InfomationParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_Texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventOpenDialog_ItemGet_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventOpenDialog_ItemGet_Parms, HeaderText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_InformationText = { "InformationText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventOpenDialog_ItemGet_Parms, InformationText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_ECareerDialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_ECareerDialogType = { "ECareerDialogType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventOpenDialog_ItemGet_Parms, ECareerDialogType), Z_Construct_UEnum_ABP_200508_ECareerDialogType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_InfomationParam = { "InfomationParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventOpenDialog_ItemGet_Parms, InfomationParam), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_HeaderText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_InformationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_ECareerDialogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_ECareerDialogType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::NewProp_InfomationParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "OpenDialog_ItemGet", nullptr, nullptr, sizeof(ELCareerStateManager_eventOpenDialog_ItemGet_Parms), Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InformationText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::NewProp_InformationText = { "InformationText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventOpenDialog_Message_Parms, InformationText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::NewProp_InformationText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "OpenDialog_Message", nullptr, nullptr, sizeof(ELCareerStateManager_eventOpenDialog_Message_Parms), Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DispTutorial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::NewProp_DispTutorial = { "DispTutorial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventOpenDialog_Tutorial_Parms, DispTutorial), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::NewProp_DispTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "OpenDialog_Tutorial", nullptr, nullptr, sizeof(ELCareerStateManager_eventOpenDialog_Tutorial_Parms), Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ECareerDialogType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ECareerDialogType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::NewProp_ECareerDialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::NewProp_ECareerDialogType = { "ECareerDialogType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerStateManager_eventOpenDialog_YesNo_Parms, ECareerDialogType), Z_Construct_UEnum_ABP_200508_ECareerDialogType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::NewProp_ECareerDialogType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::NewProp_ECareerDialogType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "OpenDialog_YesNo", nullptr, nullptr, sizeof(ELCareerStateManager_eventOpenDialog_YesNo_Parms), Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerStateManager_OpenTutorialArchive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerStateManager_OpenTutorialArchive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerStateManager_OpenTutorialArchive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerStateManager, nullptr, "OpenTutorialArchive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerStateManager_OpenTutorialArchive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerStateManager_OpenTutorialArchive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerStateManager_OpenTutorialArchive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerStateManager_OpenTutorialArchive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerStateManager_NoRegister()
	{
		return AELCareerStateManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerStateManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ELGameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ELGameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pEventComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pEventComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TShirtDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TShirtDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialRewardDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialRewardDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GotAEWCashDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GotAEWCashDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerResultDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CareerResultDataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerStateManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerStateManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerStateManager_CheckMatchOperationFromWidget, "CheckMatchOperationFromWidget" }, // 1792973709
		{ &Z_Construct_UFunction_AELCareerStateManager_CheckState, "CheckState" }, // 2805047072
		{ &Z_Construct_UFunction_AELCareerStateManager_CheckState_Cancel, "CheckState_Cancel" }, // 3231614782
		{ &Z_Construct_UFunction_AELCareerStateManager_GetCareerResultData, "GetCareerResultData" }, // 642081069
		{ &Z_Construct_UFunction_AELCareerStateManager_IsSchedule_Ending, "IsSchedule_Ending" }, // 3212933629
		{ &Z_Construct_UFunction_AELCareerStateManager_OpenDialog_ItemGet, "OpenDialog_ItemGet" }, // 1619377397
		{ &Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Message, "OpenDialog_Message" }, // 4127198255
		{ &Z_Construct_UFunction_AELCareerStateManager_OpenDialog_Tutorial, "OpenDialog_Tutorial" }, // 303907855
		{ &Z_Construct_UFunction_AELCareerStateManager_OpenDialog_YesNo, "OpenDialog_YesNo" }, // 867406533
		{ &Z_Construct_UFunction_AELCareerStateManager_OpenTutorialArchive, "OpenTutorialArchive" }, // 4212613899
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStateManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerStateManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_ELGameInstance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStateManager" },
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_ELGameInstance = { "m_ELGameInstance", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStateManager, m_ELGameInstance), Z_Construct_UClass_UELGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_ELGameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_ELGameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_pEventComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStateManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_pEventComponent = { "m_pEventComponent", nullptr, (EPropertyFlags)0x004200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStateManager, m_pEventComponent), Z_Construct_UClass_UELCareerEventComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_pEventComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_pEventComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_TShirtDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStateManager" },
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_TShirtDataTable = { "TShirtDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStateManager, TShirtDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_TShirtDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_TShirtDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_SpecialRewardDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStateManager" },
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_SpecialRewardDataTable = { "SpecialRewardDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStateManager, SpecialRewardDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_SpecialRewardDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_SpecialRewardDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_GotAEWCashDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStateManager" },
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_GotAEWCashDataTable = { "GotAEWCashDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStateManager, GotAEWCashDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_GotAEWCashDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_GotAEWCashDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_CareerResultDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerStateManager" },
		{ "ModuleRelativePath", "Public/ELCareerStateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_CareerResultDataTable = { "CareerResultDataTable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerStateManager, CareerResultDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_CareerResultDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_CareerResultDataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerStateManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_ELGameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_m_pEventComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_TShirtDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_SpecialRewardDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_GotAEWCashDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerStateManager_Statics::NewProp_CareerResultDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerStateManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerStateManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerStateManager_Statics::ClassParams = {
		&AELCareerStateManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerStateManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStateManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerStateManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerStateManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerStateManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerStateManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerStateManager, 664494512);
	template<> ABP_200508_API UClass* StaticClass<AELCareerStateManager>()
	{
		return AELCareerStateManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerStateManager(Z_Construct_UClass_AELCareerStateManager, &AELCareerStateManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerStateManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerStateManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
