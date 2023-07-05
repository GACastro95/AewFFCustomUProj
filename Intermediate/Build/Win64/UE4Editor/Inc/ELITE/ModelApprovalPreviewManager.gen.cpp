// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ModelApprovalPreviewManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelApprovalPreviewManager() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_AModelApprovalPreviewManager_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_AModelApprovalPreviewManager();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnVisualizeMode();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerIDInfo();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EnPreviewMenu();
	ELITE_API UClass* Z_Construct_UClass_AModelApprovalPreviewMenu_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_AMAPreviewMenuMail_NoRegister();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewFileParam();
// End Cross Module References
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execAdjustWrestlerInterval)
	{
		P_GET_UBOOL(Z_Param_Increase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustWrestlerInterval(Z_Param_Increase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execChangeBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execChangeCameraTarget)
	{
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeCameraTarget(Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execChangeDrawWrestlerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeDrawWrestlerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execChangeLight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeLight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execChangeViewWireframe)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeViewWireframe();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execChangeVisibleSwitchingObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeVisibleSwitchingObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execChangeVisualizeMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeVisualizeMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execDeleteDirectryFiles)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteDirectryFiles(Z_Param_Directory,Z_Param_Ext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execDisplayInputMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisplayInputMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execFindAvailableNumberByFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindAvailableNumberByFile(Z_Param_Directory,Z_Param_Ext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execGetPreviewCharacterList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ACharacter*>*)Z_Param__Result=P_THIS->GetPreviewCharacterList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execGetVisualizeMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EnVisualizeMode*)Z_Param__Result=P_THIS->GetVisualizeMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execGetWrestlerIntervalMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWrestlerIntervalMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execGetWrestlerIntervalMin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWrestlerIntervalMin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execPreChangeWrestler)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WrestlerID);
		P_GET_PROPERTY(FIntProperty,Z_Param_WrestlerIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_CostumeNo);
		P_GET_UBOOL(Z_Param_bEntCostume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreChangeWrestler(Z_Param_WrestlerID,Z_Param_WrestlerIndex,Z_Param_CostumeNo,Z_Param_bEntCostume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execRevertToDefaultNotificatins)
	{
		P_GET_UBOOL(Z_Param_IsEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RevertToDefaultNotificatins(Z_Param_IsEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execSetAnimMontageToCharacters)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimMontageToCharacters(Z_Param_Montage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execSetupWrestlerList)
	{
		P_GET_TARRAY(FWrestlerIDInfo,Z_Param_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupWrestlerList(Z_Param_List);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execSetWrestlerInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Interval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWrestlerInterval(Z_Param_Interval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AModelApprovalPreviewManager::execToggleShowMenu)
	{
		P_GET_ENUM(EnPreviewMenu,Z_Param_eMenu);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleShowMenu(EnPreviewMenu(Z_Param_eMenu));
		P_NATIVE_END;
	}
	static FName NAME_AModelApprovalPreviewManager_ChangeWrestler = FName(TEXT("ChangeWrestler"));
	void AModelApprovalPreviewManager::ChangeWrestler(int32 WrestlerID, ACharacter* Character, int32 CostumeNo, bool bEntCostume)
	{
		ModelApprovalPreviewManager_eventChangeWrestler_Parms Parms;
		Parms.WrestlerID=WrestlerID;
		Parms.Character=Character;
		Parms.CostumeNo=CostumeNo;
		Parms.bEntCostume=bEntCostume ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AModelApprovalPreviewManager_ChangeWrestler),&Parms);
	}
	static FName NAME_AModelApprovalPreviewManager_SaveMailParam = FName(TEXT("SaveMailParam"));
	void AModelApprovalPreviewManager::SaveMailParam()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModelApprovalPreviewManager_SaveMailParam),NULL);
	}
	static FName NAME_AModelApprovalPreviewManager_SetDefaultPoseToCharacters = FName(TEXT("SetDefaultPoseToCharacters"));
	void AModelApprovalPreviewManager::SetDefaultPoseToCharacters()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModelApprovalPreviewManager_SetDefaultPoseToCharacters),NULL);
	}
	static FName NAME_AModelApprovalPreviewManager_SetShowMailWindow = FName(TEXT("SetShowMailWindow"));
	void AModelApprovalPreviewManager::SetShowMailWindow(bool bShowMenu)
	{
		ModelApprovalPreviewManager_eventSetShowMailWindow_Parms Parms;
		Parms.bShowMenu=bShowMenu ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AModelApprovalPreviewManager_SetShowMailWindow),&Parms);
	}
	static FName NAME_AModelApprovalPreviewManager_SetupWrestlerBlueprint = FName(TEXT("SetupWrestlerBlueprint"));
	void AModelApprovalPreviewManager::SetupWrestlerBlueprint()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModelApprovalPreviewManager_SetupWrestlerBlueprint),NULL);
	}
	void AModelApprovalPreviewManager::StaticRegisterNativesAModelApprovalPreviewManager()
	{
		UClass* Class = AModelApprovalPreviewManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustWrestlerInterval", &AModelApprovalPreviewManager::execAdjustWrestlerInterval },
			{ "ChangeBox", &AModelApprovalPreviewManager::execChangeBox },
			{ "ChangeCameraTarget", &AModelApprovalPreviewManager::execChangeCameraTarget },
			{ "ChangeDrawWrestlerNum", &AModelApprovalPreviewManager::execChangeDrawWrestlerNum },
			{ "ChangeLight", &AModelApprovalPreviewManager::execChangeLight },
			{ "ChangeViewWireframe", &AModelApprovalPreviewManager::execChangeViewWireframe },
			{ "ChangeVisibleSwitchingObject", &AModelApprovalPreviewManager::execChangeVisibleSwitchingObject },
			{ "ChangeVisualizeMode", &AModelApprovalPreviewManager::execChangeVisualizeMode },
			{ "DeleteDirectryFiles", &AModelApprovalPreviewManager::execDeleteDirectryFiles },
			{ "DisplayInputMode", &AModelApprovalPreviewManager::execDisplayInputMode },
			{ "FindAvailableNumberByFile", &AModelApprovalPreviewManager::execFindAvailableNumberByFile },
			{ "GetPreviewCharacterList", &AModelApprovalPreviewManager::execGetPreviewCharacterList },
			{ "GetVisualizeMode", &AModelApprovalPreviewManager::execGetVisualizeMode },
			{ "GetWrestlerIntervalMax", &AModelApprovalPreviewManager::execGetWrestlerIntervalMax },
			{ "GetWrestlerIntervalMin", &AModelApprovalPreviewManager::execGetWrestlerIntervalMin },
			{ "PreChangeWrestler", &AModelApprovalPreviewManager::execPreChangeWrestler },
			{ "RevertToDefaultNotificatins", &AModelApprovalPreviewManager::execRevertToDefaultNotificatins },
			{ "SetAnimMontageToCharacters", &AModelApprovalPreviewManager::execSetAnimMontageToCharacters },
			{ "SetupWrestlerList", &AModelApprovalPreviewManager::execSetupWrestlerList },
			{ "SetWrestlerInterval", &AModelApprovalPreviewManager::execSetWrestlerInterval },
			{ "ToggleShowMenu", &AModelApprovalPreviewManager::execToggleShowMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics
	{
		struct ModelApprovalPreviewManager_eventAdjustWrestlerInterval_Parms
		{
			bool Increase;
		};
		static void NewProp_Increase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Increase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::NewProp_Increase_SetBit(void* Obj)
	{
		((ModelApprovalPreviewManager_eventAdjustWrestlerInterval_Parms*)Obj)->Increase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::NewProp_Increase = { "Increase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModelApprovalPreviewManager_eventAdjustWrestlerInterval_Parms), &Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::NewProp_Increase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::NewProp_Increase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "AdjustWrestlerInterval", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventAdjustWrestlerInterval_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeBox_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ChangeBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics
	{
		struct ModelApprovalPreviewManager_eventChangeCameraTarget_Parms
		{
			bool bForce;
		};
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((ModelApprovalPreviewManager_eventChangeCameraTarget_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModelApprovalPreviewManager_eventChangeCameraTarget_Parms), &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ChangeCameraTarget", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventChangeCameraTarget_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeDrawWrestlerNum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeDrawWrestlerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeDrawWrestlerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ChangeDrawWrestlerNum", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeDrawWrestlerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeDrawWrestlerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeDrawWrestlerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeDrawWrestlerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeLight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeLight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ChangeLight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeViewWireframe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeViewWireframe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeViewWireframe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ChangeViewWireframe", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeViewWireframe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeViewWireframe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeViewWireframe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeViewWireframe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisibleSwitchingObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisibleSwitchingObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisibleSwitchingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ChangeVisibleSwitchingObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisibleSwitchingObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisibleSwitchingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisibleSwitchingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisibleSwitchingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisualizeMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisualizeMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisualizeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ChangeVisualizeMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisualizeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisualizeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisualizeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisualizeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CostumeNo;
		static void NewProp_bEntCostume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntCostume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventChangeWrestler_Parms, WrestlerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventChangeWrestler_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_CostumeNo = { "CostumeNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventChangeWrestler_Parms, CostumeNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_bEntCostume_SetBit(void* Obj)
	{
		((ModelApprovalPreviewManager_eventChangeWrestler_Parms*)Obj)->bEntCostume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_bEntCostume = { "bEntCostume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModelApprovalPreviewManager_eventChangeWrestler_Parms), &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_bEntCostume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_CostumeNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::NewProp_bEntCostume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ChangeWrestler", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventChangeWrestler_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics
	{
		struct ModelApprovalPreviewManager_eventDeleteDirectryFiles_Parms
		{
			FString Directory;
			FString Ext;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventDeleteDirectryFiles_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Directory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Ext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventDeleteDirectryFiles_Parms, Ext), METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Ext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Ext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::NewProp_Ext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "DeleteDirectryFiles", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventDeleteDirectryFiles_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_DisplayInputMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_DisplayInputMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_DisplayInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "DisplayInputMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_DisplayInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_DisplayInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_DisplayInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_DisplayInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics
	{
		struct ModelApprovalPreviewManager_eventFindAvailableNumberByFile_Parms
		{
			FString Directory;
			FString Ext;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Directory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ext;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventFindAvailableNumberByFile_Parms, Directory), METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Directory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Ext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Ext = { "Ext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventFindAvailableNumberByFile_Parms, Ext), METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Ext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Ext_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventFindAvailableNumberByFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Directory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_Ext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "FindAvailableNumberByFile", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventFindAvailableNumberByFile_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics
	{
		struct ModelApprovalPreviewManager_eventGetPreviewCharacterList_Parms
		{
			TArray<ACharacter*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventGetPreviewCharacterList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "GetPreviewCharacterList", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventGetPreviewCharacterList_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics
	{
		struct ModelApprovalPreviewManager_eventGetVisualizeMode_Parms
		{
			EnVisualizeMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventGetVisualizeMode_Parms, ReturnValue), Z_Construct_UEnum_ELITE_EnVisualizeMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "GetVisualizeMode", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventGetVisualizeMode_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics
	{
		struct ModelApprovalPreviewManager_eventGetWrestlerIntervalMax_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventGetWrestlerIntervalMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "GetWrestlerIntervalMax", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventGetWrestlerIntervalMax_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics
	{
		struct ModelApprovalPreviewManager_eventGetWrestlerIntervalMin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventGetWrestlerIntervalMin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "GetWrestlerIntervalMin", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventGetWrestlerIntervalMin_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics
	{
		struct ModelApprovalPreviewManager_eventPreChangeWrestler_Parms
		{
			int32 WrestlerID;
			int32 WrestlerIndex;
			int32 CostumeNo;
			bool bEntCostume;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WrestlerIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CostumeNo;
		static void NewProp_bEntCostume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntCostume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventPreChangeWrestler_Parms, WrestlerID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_WrestlerIndex = { "WrestlerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventPreChangeWrestler_Parms, WrestlerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_CostumeNo = { "CostumeNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventPreChangeWrestler_Parms, CostumeNo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_bEntCostume_SetBit(void* Obj)
	{
		((ModelApprovalPreviewManager_eventPreChangeWrestler_Parms*)Obj)->bEntCostume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_bEntCostume = { "bEntCostume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModelApprovalPreviewManager_eventPreChangeWrestler_Parms), &Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_bEntCostume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_WrestlerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_CostumeNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::NewProp_bEntCostume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "PreChangeWrestler", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventPreChangeWrestler_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics
	{
		struct ModelApprovalPreviewManager_eventRevertToDefaultNotificatins_Parms
		{
			bool IsEnable;
		};
		static void NewProp_IsEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::NewProp_IsEnable_SetBit(void* Obj)
	{
		((ModelApprovalPreviewManager_eventRevertToDefaultNotificatins_Parms*)Obj)->IsEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::NewProp_IsEnable = { "IsEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModelApprovalPreviewManager_eventRevertToDefaultNotificatins_Parms), &Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::NewProp_IsEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::NewProp_IsEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "RevertToDefaultNotificatins", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventRevertToDefaultNotificatins_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_SaveMailParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_SaveMailParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_SaveMailParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "SaveMailParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_SaveMailParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SaveMailParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_SaveMailParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_SaveMailParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics
	{
		struct ModelApprovalPreviewManager_eventSetAnimMontageToCharacters_Parms
		{
			UAnimMontage* Montage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventSetAnimMontageToCharacters_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::NewProp_Montage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "SetAnimMontageToCharacters", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventSetAnimMontageToCharacters_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_SetDefaultPoseToCharacters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_SetDefaultPoseToCharacters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetDefaultPoseToCharacters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "SetDefaultPoseToCharacters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_SetDefaultPoseToCharacters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetDefaultPoseToCharacters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_SetDefaultPoseToCharacters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_SetDefaultPoseToCharacters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics
	{
		static void NewProp_bShowMenu_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::NewProp_bShowMenu_SetBit(void* Obj)
	{
		((ModelApprovalPreviewManager_eventSetShowMailWindow_Parms*)Obj)->bShowMenu = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::NewProp_bShowMenu = { "bShowMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ModelApprovalPreviewManager_eventSetShowMailWindow_Parms), &Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::NewProp_bShowMenu_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::NewProp_bShowMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "SetShowMailWindow", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventSetShowMailWindow_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerBlueprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerBlueprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "SetupWrestlerBlueprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics
	{
		struct ModelApprovalPreviewManager_eventSetupWrestlerList_Parms
		{
			TArray<FWrestlerIDInfo> List;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_List_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWrestlerIDInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventSetupWrestlerList_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::NewProp_List,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "SetupWrestlerList", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventSetupWrestlerList_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics
	{
		struct ModelApprovalPreviewManager_eventSetWrestlerInterval_Parms
		{
			float Interval;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Interval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventSetWrestlerInterval_Parms, Interval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::NewProp_Interval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "SetWrestlerInterval", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventSetWrestlerInterval_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics
	{
		struct ModelApprovalPreviewManager_eventToggleShowMenu_Parms
		{
			EnPreviewMenu eMenu;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eMenu_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eMenu;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::NewProp_eMenu_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::NewProp_eMenu = { "eMenu", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModelApprovalPreviewManager_eventToggleShowMenu_Parms, eMenu), Z_Construct_UEnum_ELITE_EnPreviewMenu, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::NewProp_eMenu_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::NewProp_eMenu,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModelApprovalPreviewManager, nullptr, "ToggleShowMenu", nullptr, nullptr, sizeof(ModelApprovalPreviewManager_eventToggleShowMenu_Parms), Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModelApprovalPreviewManager_NoRegister()
	{
		return AModelApprovalPreviewManager::StaticClass();
	}
	struct Z_Construct_UClass_AModelApprovalPreviewManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MailMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MailMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenShotParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenShotParam;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCharacterList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCharacterList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_pcCharacterList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sCharacterMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sCharacterMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fWrestlerIntervalMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fWrestlerIntervalMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_fWrestlerIntervalMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_fWrestlerIntervalMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModelApprovalPreviewManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModelApprovalPreviewManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_AdjustWrestlerInterval, "AdjustWrestlerInterval" }, // 1081842001
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeBox, "ChangeBox" }, // 3851010427
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeCameraTarget, "ChangeCameraTarget" }, // 3773368780
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeDrawWrestlerNum, "ChangeDrawWrestlerNum" }, // 3427935938
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeLight, "ChangeLight" }, // 2781782822
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeViewWireframe, "ChangeViewWireframe" }, // 1253331025
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisibleSwitchingObject, "ChangeVisibleSwitchingObject" }, // 2439016013
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeVisualizeMode, "ChangeVisualizeMode" }, // 1814833160
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ChangeWrestler, "ChangeWrestler" }, // 536608549
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_DeleteDirectryFiles, "DeleteDirectryFiles" }, // 3969111409
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_DisplayInputMode, "DisplayInputMode" }, // 3319549886
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_FindAvailableNumberByFile, "FindAvailableNumberByFile" }, // 1376339774
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_GetPreviewCharacterList, "GetPreviewCharacterList" }, // 1297868012
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_GetVisualizeMode, "GetVisualizeMode" }, // 1341712349
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMax, "GetWrestlerIntervalMax" }, // 294523098
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_GetWrestlerIntervalMin, "GetWrestlerIntervalMin" }, // 530245174
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_PreChangeWrestler, "PreChangeWrestler" }, // 2600099237
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_RevertToDefaultNotificatins, "RevertToDefaultNotificatins" }, // 2567541203
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_SaveMailParam, "SaveMailParam" }, // 2873901540
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_SetAnimMontageToCharacters, "SetAnimMontageToCharacters" }, // 72436455
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_SetDefaultPoseToCharacters, "SetDefaultPoseToCharacters" }, // 3342630830
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_SetShowMailWindow, "SetShowMailWindow" }, // 1051507509
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerBlueprint, "SetupWrestlerBlueprint" }, // 959571500
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_SetupWrestlerList, "SetupWrestlerList" }, // 3462021361
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_SetWrestlerInterval, "SetWrestlerInterval" }, // 4080409919
		{ &Z_Construct_UFunction_AModelApprovalPreviewManager_ToggleShowMenu, "ToggleShowMenu" }, // 2213642151
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ModelApprovalPreviewManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_PreviewMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModelApprovalPreviewManager" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_PreviewMenu = { "PreviewMenu", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModelApprovalPreviewManager, PreviewMenu), Z_Construct_UClass_AModelApprovalPreviewMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_PreviewMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_PreviewMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_MailMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModelApprovalPreviewManager" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_MailMenu = { "MailMenu", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModelApprovalPreviewManager, MailMenu), Z_Construct_UClass_AMAPreviewMenuMail_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_MailMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_MailMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_ScreenShotParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModelApprovalPreviewManager" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_ScreenShotParam = { "ScreenShotParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModelApprovalPreviewManager, ScreenShotParam), Z_Construct_UScriptStruct_FPreviewFileParam, METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_ScreenShotParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_ScreenShotParam_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_pcCharacterList_Inner = { "m_pcCharacterList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_pcCharacterList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModelApprovalPreviewManager" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_pcCharacterList = { "m_pcCharacterList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModelApprovalPreviewManager, m_pcCharacterList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_pcCharacterList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_pcCharacterList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_sCharacterMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModelApprovalPreviewManager" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_sCharacterMax = { "m_sCharacterMax", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModelApprovalPreviewManager, m_sCharacterMax), METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_sCharacterMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_sCharacterMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMin_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModelApprovalPreviewManager" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMin = { "m_fWrestlerIntervalMin", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModelApprovalPreviewManager, m_fWrestlerIntervalMin), METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ModelApprovalPreviewManager" },
		{ "ModuleRelativePath", "Public/ModelApprovalPreviewManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMax = { "m_fWrestlerIntervalMax", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModelApprovalPreviewManager, m_fWrestlerIntervalMax), METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModelApprovalPreviewManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_PreviewMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_MailMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_ScreenShotParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_pcCharacterList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_pcCharacterList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_sCharacterMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModelApprovalPreviewManager_Statics::NewProp_m_fWrestlerIntervalMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModelApprovalPreviewManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModelApprovalPreviewManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModelApprovalPreviewManager_Statics::ClassParams = {
		&AModelApprovalPreviewManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModelApprovalPreviewManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModelApprovalPreviewManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModelApprovalPreviewManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModelApprovalPreviewManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModelApprovalPreviewManager, 3867915112);
	template<> ELITE_API UClass* StaticClass<AModelApprovalPreviewManager>()
	{
		return AModelApprovalPreviewManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModelApprovalPreviewManager(Z_Construct_UClass_AModelApprovalPreviewManager, &AModelApprovalPreviewManager::StaticClass, TEXT("/Script/ELITE"), TEXT("AModelApprovalPreviewManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModelApprovalPreviewManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
